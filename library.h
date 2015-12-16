#ifndef LIBRARY_H
#define LIBRARY_H
#include <QApplication>
#include <QDesktopWidget>
#include <QObject>
#include <QtCore/QCoreApplication>
#include <iostream>
#include <QFileDialog>
#include <vector>
#include <string>
#include <algorithm>
#include <sys/types.h>
#include <QDebug>
#include <sstream>
#include <QTableWidget>
#include <QRect>
#include <fstream>
#include <QDir>
#include <QDirIterator>

using namespace std;

typedef unsigned int uint;

class library : public QTableWidget
{
    Q_OBJECT

    public:
        library(const library &other);
        library(QWidget *parent = 0, string dir = "music", int row = 0, int col = 0, int w = 10, int h = 10);
        ~library();
        library& operator=(const library &other);

     public slots:
        void setDirectory(string dir);
        string getDirectory();
        void addMusic();
        void deleteMusic();
        void sortByArtist();
        void sortByGenre();
        void sortByTitle();
        void sortByAlbum();
        void sortByLength();
        void display();
        string nextSong();
        string prevSong();
        string currentSong();
        void moveToNextSong();
        void moveToPrevSong();
        int numberOfSongsInLibrary();
        //"Perfect World
//        string getRandomSong();
//        string getSongArtist();
//        string getSongTitle();
//        string getSongDuration();
//        string getSongSize();
//        string getSongGenre();
//        void editSongInfo();
//        int songPlayCount();
//        string totalPlayTime();


    private:
        string libraryPath;
        int songToPlay;

        void init();
        void copy(const library &other);
        string computePlayTime();
        void read_directory( const string& path);

};

#endif // LIBRARY_H
