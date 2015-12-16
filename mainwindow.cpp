#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    offsetValue = 0;
    lib = new library(ui->tab);
    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(lib);
    layout->setContentsMargins(0,0,0,0);
    lib->horizontalHeader()->setStretchLastSection(true);
    lib->horizontalHeader()->resizeSections(QHeaderView::Stretch);
    ui->tab->setLayout(layout);
    lib->show();
    cout<<lib->currentSong()<<endl;
    controls = new musicEngine();
    controls->loadFromFile(lib->currentSong());
    ui->tabWidget->setTabText(0,"Music Library");
    connect(ui->addMusic,SIGNAL(clicked()),lib,SLOT(addMusic()));
    connect(ui->playButton, SIGNAL(clicked()), this, SLOT(playMusic()));
    connect(ui->nextButton, SIGNAL(clicked()), this, SLOT(nextMusic()));
    connect(ui->previousButton, SIGNAL(clicked()), this, SLOT(prevMusic()));
    connect(ui->pauseButton, SIGNAL(clicked()), this, SLOT(pauseMusic()));
    connect(ui->stopButton, SIGNAL(clicked()), this, SLOT(stopMusic()));
    connect(ui->progressSlider,SIGNAL(sliderPressed()),this,SLOT(sliderPause()));
    connect(ui->progressSlider,SIGNAL(sliderReleased()),this,SLOT(sliderRelease()));
    connect(controls,SIGNAL(positionChanged(qint64)), this, SLOT(updateStatusBar()));
    musicWasPlaying=false;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete controls;
    delete lib;
}


void MainWindow::sliderPause()
{
    if(controls->getStatus() == QMediaPlayer::PlayingState)
    {
        musicWasPlaying=true;
    }
    else musicWasPlaying=false;
    controls->pause();    
//    musicWasPlaying = (controls->getStatus() == QMediaPlayer::PlayingState) ? true : false;
    string a = (musicWasPlaying ? "t" : "f");
    qDebug("playing? %s",a.c_str());
}

void MainWindow::sliderRelease()
{
    qDebug("offset: %d", ui->progressSlider->value());
    offsetValue = ((ui->progressSlider->value())*(int)(controls->getDuration().getrawTime()))/100;
    qDebug("offsetval: %d", offsetValue);
    controls->setPlayingOffset(offsetValue);

    if(!musicWasPlaying)  controls->pause();
    else controls->play();
}


void MainWindow::updateStatusBar()
{
    try
    {
        if(controls->getStatus() == QMediaPlayer::PlayingState)
        {
            qint64 duration = controls->getDuration().getrawTime();
            qint64 offset = controls->getPlayingOffset().getrawTime();
            int percentage = (100*offset)/duration;
            if(percentage == 100)
            {
                ui->progressSlider->setValue(0);
                lib->moveToNextSong();
                controls->loadFromFile(lib->currentSong());
                offsetValue = 0;
                controls->setPlayingOffset(offsetValue);
            }
            else
            {
                ui->progressSlider->setValue(percentage);
                ui->progressSlider->update();
            }
        }

    }
    catch(...)
    {

    }
}


void MainWindow::prevMusic()
{
    lib->prevSong();
    controls->loadFromFile(lib->currentSong());
    controls->play();
}

void MainWindow::nextMusic()
{
    lib->nextSong();
    controls->loadFromFile(lib->currentSong());
    controls->play();
}


void MainWindow::pauseMusic()
{
    controls->pause();
}

void MainWindow::stopMusic()
{
    controls->stop();
}

void MainWindow::playMusic()
{
    try
    {
        string playThis = lib->currentSong();
        if(controls->currentlyPlaying().c_str()!=playThis)
        {
            controls->loadFromFile(playThis);
            controls->setPlayingOffset(offsetValue);
        }
        qDebug("Starting to play music ");
        controls->play();
    }
    catch(musicEngineErrors e)
    {
        if(e == FILE_NOT_FOUND)
            cout<<"Music file not found!"<<endl;
        if(e == FILE_NOT_LOADED)
             cout<<"Music file not loaded. Cannot proceed!"<<endl;
        if(e == BAD_VOLUME)
            cout<<"Volume set to an illegal level!"<<endl;
    }
    catch(...)
    {
        cout<<"An unknown error occurred!!"<<endl;
    }
}
