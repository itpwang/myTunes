#include "playlist.h"
#include <stdlib>     /* srand, rand */
#include <ctime>       /* time */
playlist::playlist()
{

}
playlist:: addSongs()
{

}

playlist:: deleteSongs()
{

}

playlist:: display()
{

}

playlist:: shuffle(bool yes)
{

}

playlist:: loop(bool yes)
{
    int counter=0;
    while(counter<vector.size && yes== true)
    playsong(vector[counter]);
    counter++
    if(counter == vector_size)
    counter=0;
}

playlist:: random(bool yes)
{
    srand(time(NULL));
    int index = rand()% songs.size(); //create index from 0 - vector_size-1
    if(yes)
    {
        //play the song with given index
        //call the play function from engine
        getPlayingOffset();
    }
}
