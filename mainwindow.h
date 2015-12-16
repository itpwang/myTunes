#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QBoxLayout>
#include <QHeaderView>
#include "library.h"
#include "musicEngine.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void pauseMusic();
    void stopMusic();
    void playMusic();
    void prevMusic();
    void nextMusic();
    void sliderPause();
    void sliderRelease();
    void updateStatusBar();    

private:
    Ui::MainWindow *ui;
    library *lib;
    musicEngine* controls;
    bool musicWasPlaying;
    qint64 offsetValue;
};

#endif // MAINWINDOW_H
