#include "library.h"

library::library(const library &other)
{
    copy(other);
}

library::library(QWidget *parent, string dir,  int row , int col, int w , int h)
{
    setParent(parent);
    setGeometry(row,col,w,h);
    ifstream in;
    in.open("config.cfg");
    if(in.fail())
        libraryPath = "music";
    else
        getline(in,libraryPath);
    in.close();
    init();
    songToPlay = 0;
    show();
}

library::~library()
{

}

library& library::operator=(const library &other)
{
    if(this != &other)
        copy(other);
    return *this;
}

void library::setDirectory(string dir)
{
    libraryPath = dir;
}

string library::getDirectory()
{
    return libraryPath;
}

void library::addMusic() //opens file and saves path to null
{
    QFileDialog d;
    QString fileName = d.getOpenFileName(this,
         tr("Open Music File"), "", tr("Music Files (*.ogg *.wav *.mp3)"));
    string whatToDo;
    whatToDo = "cp \""+fileName.toStdString() + "\"  "+libraryPath+"/. > NULL";
    std::cout<<whatToDo<<endl;
    system(whatToDo.c_str());
    init();
}

void library::deleteMusic()
{

}

void library::sortByArtist()
{
        sortItems(1);
}

void library::sortByGenre()
{
        sortItems(3);
}

void library::sortByTitle()
{
        sortItems(0);
}

void library::sortByAlbum()
{
        sortItems(2);
}

void library::sortByLength()
{
        sortItems(4);
}

void library::display()
{
    show();
}

string library::nextSong()
{
    qDebug("songtoplay is %d ", songToPlay);
    uint next = ((uint)(songToPlay +1) == (uint)rowCount()) ? 0 : (songToPlay++);
    //increment to SongToPlay is not leaving scope, fix later if time permits (library does not perform a full cycle)
    qDebug("next is %d ", next);
    return item(next,0)->text().toStdString();
}

string library::prevSong()
{
    uint prev = (uint)(songToPlay == 0) ? (uint)rowCount() - 1 : (songToPlay--);
    return item(prev,0)->text().toStdString();
}

string library::currentSong()
{
    qDebug("Current song triggered: %s", (libraryPath + '\\' + item(songToPlay,0)->text().toStdString()).c_str());
    return libraryPath + '\\'  + item(songToPlay,0)->text().toStdString();
}

void library::moveToNextSong()
{
    songToPlay = (uint)(songToPlay + 1) == (uint)rowCount() ? 0 : (uint)(songToPlay + 1);
}

void library::moveToPrevSong()
{
    songToPlay = (uint)(songToPlay == 0) ? (uint)(rowCount() - 1): songToPlay - 1;
}

int library::numberOfSongsInLibrary()
{
    return rowCount();
}



void library::read_directory( const string& path)
{
  string filename;
  string remainder;
  vector<string> files;
  qDebug(path.c_str());
  QString pathstring(path.c_str());
  QDirIterator diriter(pathstring);
  while(diriter.hasNext())
  {
      QString temp = diriter.next();
      QFile inFile( temp );
//      while(inFile.fileName().toStdString() != "." || inFile.fileName().toStdString() != "..")
//      {
//          break; temp = diriter.next();
//      }
      filename=inFile.fileName().toStdString();
      remainder=filename.erase(0,libraryPath.length()+1);

      if( !inFile.open( QIODevice::ReadOnly | QIODevice::Text ) )
          {
              qDebug("Fail to open file in read_directory. File: %s", filename.c_str());

          }
      else {
          files.push_back(filename);
      }
  }
    setColumnCount(5);
    qDebug("size: %d", files.size());
    setRowCount(files.size());
    for(int i = 0; i < files.size(); ++i)
    {
        setItem(i,0, new QTableWidgetItem(files[i].c_str()));
        setItem(i,1, new QTableWidgetItem("Artist"));
        setItem(i,2, new QTableWidgetItem("Album"));
        setItem(i,3, new QTableWidgetItem("Length"));
        setItem(i,4, new QTableWidgetItem("Genre"));
    }
 }


void library::init()
{
    QStringList tableHeader;
    setRowCount(0);
    read_directory(libraryPath);
    tableHeader<<"Title"<<"Artist"<<"Album"<<"Length"<<"Genre";
    verticalScrollBar();
    setHorizontalHeaderLabels(tableHeader);
    setEditTriggers(QAbstractItemView::NoEditTriggers);
    setSelectionBehavior(QAbstractItemView::SelectRows);
    setSelectionMode(QAbstractItemView::SingleSelection);
    setShowGrid(true);
    setStyleSheet("QTableView {selection-background-color: pink;}");
    setGeometry(QApplication::desktop()->screenGeometry());
    sortItems(0);
    resizeRowsToContents();
    resizeColumnsToContents();
    selectRow(0);
}

void library::copy(const library &other)
{
    libraryPath = other.libraryPath;
    songToPlay = other.songToPlay;
}

string library::computePlayTime()
{
    string answer;
    return answer;
}
