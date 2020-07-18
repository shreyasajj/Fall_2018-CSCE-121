// implementation of MazeGame functions

#include "MazeGame.h"
#include <string>
MazeGame::MazeGame(string filename)
{

    save_out.open(out_name);
    ifstream in;
    in.open(filename);
    if (!in) {
        cerr << "Wrong maze tiles file: " + filename << endl;
        throw IncorrectFile();
    }
    save_out << "Maze tiles file: " << filename << endl << endl;
    in >> maze;
}

MazeGame::~MazeGame()
{
    save_out.close();
}

void MazeGame::start_game(istream & is)
{



    vector<vector<Tile *>> tiles =maze.get_tiles();
    for(int i=0; i<tiles.size(); i++)
        for(int j=0; j<tiles[i].size(); j++)
            if(tiles[i][j]->is_start() )
                players.push_back(new MazePlayer(Position(i,j)));

    print_maze();



    update_loop(is);
}

// Important: if you use cout << something
// do the same with save_out << something
// Otherwise, the file output.txt would be incorrect
void MazeGame::update_loop(istream & is)
{
    int pnum = 0; // player's number

    for(auto player : players) {
        pnum++;

        cout << "Player " << pnum << " position : (" << player->get_position().row << ", " << player->get_position().col
             << ")" << endl;
        save_out << "Player " << pnum << " position : (" << player->get_position().row << ", " << player->get_position().col
                << ")" << endl;
        cout << "Move " << player->move_number() << "----------------------------" << endl;
        save_out << "Move " << player->move_number() << "----------------------------" << endl;
        bool fail = true;
        do {

            string move;
            cin >> move;
            if (!cin) {
                cin.clear();
                cin.ignore(10000,'\n');
            }else {
                Position p = player->take_turn(move);
                 if(maze.can_move_to_tile(p)){
                     save_out<<move<<endl;
                    player->set_position(p);
                    fail=false;
                     cout<<endl;
                     save_out<<endl;

                    if(maze.is_tile_end(p)){
                        cout<<"Player "<<pnum<<" Won in "<<player->move_number()<<" move(s)";
                        save_out<<"Player "<<pnum<<" Won in "<<player->move_number()<<" move(s)";
                        return;
                    }else{
                        print_maze();
                    }
                }else{
                    cout<<"Invalid Input. Try again."<<endl;
                }

            }
        }while(fail);
    }

    update_loop(is);
}

void MazeGame::print_maze()
{
    vector<string> grid;
    for(auto row : maze.get_tiles()) {
        string tiles = "";
        for(auto t : row)
            tiles += t->tile_char;

        grid.push_back(tiles);
    }

    for(auto player : players)
        grid[player->get_position().row][player->get_position().col] = 'P';

    cout << " ";
    save_out << " ";

    for(int i = 0; i < grid[0].size(); i++) {
        cout << i;
        save_out << i;
    }

    cout << endl;
    save_out << endl;

    for(int i = 0; i < grid.size(); i++) {
        cout << i << grid[i] << endl;
        save_out << i << grid[i] << endl;
    }
}

