#include <iostream>;

using namespace std;

class GameCharacter {
    public:
    string name;
    int health;
    double score;
    
    //Memanggil constructor 
    GameCharacter(string username, int health_player, double score_player);
    //Inisial constructor
    
}; 

GameCharacter::GameCharacter(string username, int health_player, double score_player){

    name = username;
    health_player = health;
    score = score_player;
}

int main() {

    // inilisasi object 1
    GameCharacter game_character_1("Dhani", 90, 99.87);
    
    // inilisasi object 2
    GameCharacter game_character_2("Rian", 80, 70.76);

    // Menampilkan informasi 1 dengan constructor 
    cout << game_character_1.name << game_character_1.health << game_character_1.score << endl;

    // Menampilkan informasi 2 dengan constructor
    cout << game_character_2.name << game_character_2.health << game_character_2.score << endl;

    return 0;
    
}