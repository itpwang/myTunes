#include "time.h"

Time::Time()
{
    rawTime=0;
}

Time::Time(qint64 time)
{
    rawTime=time;
}


Time::~Time()
{

}

float Time::asSeconds()
{
    return (rawTime/1000.0);
}

void Time::savetime(qint64 time)
{
    rawTime=time;
}

qint64 Time::getrawTime()
{
    return rawTime;
}
