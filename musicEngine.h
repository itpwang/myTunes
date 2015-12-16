#ifndef musicEngine_H
#define musicEngine_H
#include <QMediaPlayer>
#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "time.h"

using namespace std;

enum musicEngineErrors { FILE_NOT_FOUND, FILE_NOT_LOADED, BAD_VOLUME, BAD_PITCH};

class musicEngine : public QMediaPlayer
{
    public:
        musicEngine();
        ~musicEngine();
        musicEngine(string whatToPlay);

        void play(); //inherits from QMediaPlayer
//        void 	pause ();//inherits from QMediaPlayer
//        void 	stop ();//inherits from QMediaPlayer
        Time getDuration();
//        unsigned int 	getChannelCount () const;
//        unsigned int 	getSampleRate () const;
        QMediaPlayer::State getStatus(); //*
        void    updateTime();
//        void 	setLoop (bool loop);
//        bool 	getLoop () const;
        void 	setPitch (float pitch);
        void 	setVolume (float volume); //*
        void    setPlayingOffset(qint64 timeOffset); //*
        Time    getPlayingOffset();
        void 	setPosition (float x, float y, float z);
        void 	setRelativeToListener (bool relative);
        void 	setMinDistance (float distance);
        void 	setAttenuation (float attenuation);
        void    setWhatToPlay(string whatToPlay);
        float 	getPitch () const;
        float 	getVolume () const;
        bool 	isRelativeToListener () const;
        float 	getMinDistance () const;
        float 	getAttenuation () const;
        void    loadFromFile(string fileName);//*
        string currentlyPlaying() const;

        friend
        ostream& operator<<(ostream& out, const musicEngine &engine);

    protected:
        void loadFile(string &file);

    private:
        string currentPlay;
        bool musicLoaded;
        void safe() const;
        Time rawTime;
};

#endif // musicEngine_H
