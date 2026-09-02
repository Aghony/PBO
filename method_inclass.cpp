#include <iostream>;

using namespace std;

class GameCharacter {
    public: 
    string name;

    // Deklarasi method speak() di dalam class
    void speak() {
        cout << "Halo " << name << ", ";
        cout << "Selamat datang di mata kuliah PBO" << endl;
    }
}; 

int main() {

    // inilisasi object
    GameCharacter player_1;

    //input nama dengan object
    player_1.name = "Rian";

    //Memanggil method speak dengan objek player 1
    player_1.speak();
}