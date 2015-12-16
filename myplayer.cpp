#include "myplayer.h"
#include "ui_myplayer.h"

myPlayer::myPlayer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myPlayer)
{
        ui->setupUi(this);

        connect(ui->playButton,SIGNAL(clicked()), this, SLOT(playButtonPressed()));
        connect(ui->stopButton,SIGNAL(clicked()), this, SLOT(stopButtonPressed()));
        connect(ui->reverseButton,SIGNAL(clicked()), this, SLOT(reverseButtonPressed()));
        connect(ui->fastForwardButton,SIGNAL(clicked()), this, SLOT(fastForwardButtonPressed()));
        connect(ui->pauseButton,SIGNAL(clicked()), this, SLOT(pauseButtonPressed()));

}

myPlayer::~myPlayer()
{
    delete ui;
}

void myPlayer::playButtonPressed()
{
    emit playPMusic();
}

void myPlayer::pauseButtonPressed()
{
    emit pausePMusic();
}

void myPlayer::fastForwardButtonPressed()
{
    emit fastForwardPMusic();
}

void myPlayer::reverseButtonPressed()
{
    emit reversePMusic();
}

void myPlayer::stopButtonPressed()
{
    emit stopPMusic();
}

void myPlayer::playMusic()
{
    play();
}

void myPlayer::pauseMusic()
{
    pause();
}

void myPlayer::fastForwardMusic()
{

}

void myPlayer::reverseMusic()
{

}

void myPlayer::stopMusic()
{
    stop();
}



