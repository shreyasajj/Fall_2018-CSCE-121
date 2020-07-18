#include "Tile.h"

// output a tile character
ostream & operator << (ostream &out, const Tile &t)
{
    out << t.tile_char;
    return out;
}

// *& is a reference to a pointer
// here t is a reference to Tile*
// read in a tile character, and return in t a Tile object
istream & operator >> (istream &in,  Tile *&t)
{

    char b;
    in>>b;
    switch(b)
    {
        case 'S':
            t=new StartingTile();
            break;
        case 'X':
            t=new EmptyTile();
            break;
        case 'W':
            t=new WallTile();
            break;
        case 'E':
            t=new EndingTile();
            break;


    }


    return in;
}
