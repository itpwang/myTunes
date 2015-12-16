#include "musicEngine.h"

musicEngine::musicEngine()
{
    musicLoaded = false;
    Time* temp=new Time();
    rawTime=*temp;
    currentPlay = "empty";
}

musicEngine::~musicEngine()
{
    delete &rawTime;
}


musicEngine::musicEngine(string whatToPlay)
{
    loadFile(whatToPlay);
}

void musicEngine::play()
{
    QMediaPlayer::play();
}

Time  musicEngine::getDuration()
{
    safe();
    rawTime = duration();
    return rawTime;
}

void   musicEngine::updateTime()
{
    rawTime.savetime(QMediaPlayer::position());
}

void    musicEngine::setPlayingOffset(qint64 timeOffset)
{
    safe();
    QMediaPlayer::setPosition(timeOffset);
    updateTime();
}

Time    musicEngine::getPlayingOffset()
{
    safe();
    updateTime();
    return rawTime;
}


QMediaPlayer::State musicEngine::getStatus()
{
    return state();
}



void    musicEngine::setVolume(float volume)
{
    safe();
    if(volume < 0 || volume > 100)
        throw BAD_VOLUME;
    int temp = static_cast<int>(volume);
    QMediaPlayer::setVolume(temp);
}



void    musicEngine::setWhatToPlay(string whatToPlay)
{
    loadFile(whatToPlay);
}

//float   musicEngine::getPitch () const
//{
//    safe();
//    return Music::getPitch();
//}

float   musicEngine::getVolume() const
{
    safe();
    return QMediaPlayer::volume();
}

string  musicEngine::currentlyPlaying() const
{
    safe();
    return currentPlay;
}


void musicEngine::loadFromFile(string fileName)
{
    loadFile(fileName);
}


void musicEngine::loadFile(string &file)
{
    currentPlay = file;
    ifstream in;
    in.open(file.c_str());
    if(in.fail())
    {
        cout<<"File not found"<<endl;
        currentPlay="empty";
    }
    //else
        //cout<<"File found"<<endl;
    in.close();

    QMediaPlayer::setMedia(QUrl::fromLocalFile(file.c_str()));
        qDebug("loadfile triggered: %s", file.c_str());
    musicLoaded = true;
}

void musicEngine::safe() const
{
    if(!musicLoaded)
        throw FILE_NOT_LOADED;
}



//ostream& operator<<(ostream& out, const musicEngine &music)
//{

//    out << music.currentPlay<<":" << endl
//        << " " << music.getDuration().asSeconds() << " seconds"       << endl
//        << " " << music.getSampleRate()           << " samples / sec" << endl
//        << " " << music.getChannelCount()         << " channels"      << endl;
//    return out;
//}
