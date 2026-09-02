#include <iostream>;

using namespace std;

class GameCharacter {
    public: 
    //Memanggil Method Result
    void result(string username, int health_player);
}; 

void GameCharacter::result(string username, int health_player){
    health_player -= 20;

    cout << "Nama Player: " << username << endl;
    cout << "Health: " << health_player << endl;
} 

int main() {

    // inilisasi object
    GameCharacter player_1;

    //input nama dengan object
    player_1.result("Dhani", 90);

}