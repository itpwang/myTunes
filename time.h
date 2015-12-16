#ifndef TIME_H
#define TIME_H
#include <QtGlobal>

class Time
{
    public:
        Time();
        Time(long long time);
        ~Time();
        float asSeconds();//converts qint64 to float
        void savetime(long long int time);
        long long int getrawTime();

    private:
        long long int rawTime;


};

#endif // TIME_H
