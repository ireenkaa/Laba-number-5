#include <iostream> 
#include <vector> 
#include "MusFest.h" 
using namespace std;

int main()
{
    vector<Musician> musiciansvector = { Musician("Two Feet", 25000, 29),
     Musician("Drake", 30000, 36),
     Musician("Stepan Hiha", 20000, 60) };

    MusicFestival festival(60000, musiciansvector);

    for (int i = 0; i < festival.musicians.size(); i++)
    {
        cout << i << " musician is " << festival.musicians[i].Name << endl;
    }
    return 0;
}