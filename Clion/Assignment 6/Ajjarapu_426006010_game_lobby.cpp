#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
using namespace std;
vector<int> lobby_current_id;
vector<int> player_current_id;
enum Player_state{Disconnected, Connected, Ready, Not_ready };
class Lobby;
class Player{
private:
    int player_id;
    int lobby_id;
    Player_state player_state;
public:
     Player(){
        int not_Found=true;
        int randomnumber;
        do {
            srand (time(NULL));
            randomnumber=rand();
            for (int i = 0; i < player_current_id.size(); i++) {
                if (randomnumber==player_current_id[i]){
                    not_Found=false;
                }
            }
        }while(!not_Found);
        player_current_id.push_back(randomnumber);
        player_id=randomnumber;
        lobby_id=-1;
        player_state=Disconnected;
    }
    void ready_player();
    void unready_player();
    void connect_to_lobby(Lobby L);
    void disconnect_from_lobby(Lobby L);
    Player_state getPlayerState();
    int getPlayerid();



};

Player_state Player::getPlayerState(){
    return player_state;
}
int Player::getPlayerid() {
    return player_id;
}

class Lobby{
private:
    int lobby_id;
    vector<Player*> player;
    int max_size;
    int min_Player;
public:
    void construct(){
        int not_Found=true;
        int randomnumber;
        do {
            srand (time(NULL));
            randomnumber=rand();
            for (int i = 0; i < lobby_current_id.size(); i++) {
                if (randomnumber==lobby_current_id[i]){
                    not_Found=false;
                }
            }
        }while(!not_Found);
        lobby_current_id.push_back(randomnumber);
        lobby_id=randomnumber;
        max_size=10;
        min_Player=1;
    }
    bool check_if_all_players_ready();
    bool check_if_ready_to_start_game();
    void start_game();
    void join_game(Player* player_id);
    void leave_game(Player* player_id);
    int getLobbyId();


};
int Lobby::getLobbyId() {
    return lobby_id;
}
bool Lobby::check_if_all_players_ready(){

    for(int i=0;i<player.size();i++){
        if(player[i]->getPlayerState()!=Ready){
            return false;
        }
    }
    return true;
}
bool Lobby::check_if_ready_to_start_game() {
    if(check_if_all_players_ready() && player.size()>=min_Player && player.size()<=max_size){
        return true;
    }
    return false;
};

void Lobby::start_game() {
    cout<<"Game Started "<<endl;

}
void Lobby::join_game(Player* player_id) {
    player.push_back(player_id);
}
void Lobby::leave_game(Player* player_id) {
    for(int i=0; i<player.size(); i++){
        if(player_id->getPlayerid()==player[i]->getPlayerid()){
            player.erase(player.begin()+i);
        }
    }
}

void Player::ready_player() {
    player_state=Ready;

}
void Player::unready_player() {
    player_state=Not_ready;

}
void Player::connect_to_lobby(Lobby L) {
    lobby_id=L.getLobbyId();
    player_state=Connected;
    L.join_game(this);

}
void Player::disconnect_from_lobby(Lobby L) {
    lobby_id=-1;
    player_state=Disconnected;
    L.leave_game(this);

}

int strong(int i){
    cout<<"Hi"<<i<<endl;
}
int strong(){
    cout<<"Hello"<<3<<endl;
    return 3;
}
int strong(int q, string b){
    cout<<b<<q<<endl;
    return 0;
}

