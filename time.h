#ifndef TIME_H
#define TIME_H
#include <QtGlobal>

class Time
{
    public:
        Time();
        Time(qint64 time);
        ~Time();
        float asSeconds();//converts qint64 to float
        void savetime(qint64 time);
        qint64 getrawTime();

    private:
        qint64 rawTime;


};

#endif // TIME_H
