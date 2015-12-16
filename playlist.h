#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <string>
#include <QApplication>
#include <QDesktopWidget>
#include <QObject>
#include <QtCore/QCoreApplication>
#include <iostream>
#include <QFileDialog>
#include <vector>
#include <algorithm>
#include <sys/types.h>
#include <QDebug>
#include <sstream>
#include <QTableWidget>


using namespace std;

class playList: public QTableWidget
{
public:
    playList();
    playList(string dir);
    ~playList();
    playList(const playList &other);
    playList& operator=(const playList &other);

    void addSongs();
    void deleteSongs();
    void display();
    void shuffle(bool yes);
    void loop(bool yes);
    void random(bool yes);
  private:
    vector<string> songs;
};

#endif // PLAYLIST_H
