#include "time.h"

Time::Time()
{
    rawTime=0;
}

Time::Time(long long int time)
{
    rawTime=time;
}


Time::~Time()
{

}

float Time::asSeconds()
{
    long long int temp = rawTime;
    qDebug("pretval: %d", rawTime);
    float returnvalue =  temp/1000.0;
    qDebug("retval: %d", returnvalue);
    return returnvalue;
}

void Time::savetime(long long time)
{
    rawTime=time;
}

long long Time::getrawTime()
{
    return rawTime;
}
