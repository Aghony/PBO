#include <iostream>

using namespace std;

class Player {
    public:
    int health;
    string name;
    double score;
};

int main () {
    //membuat objek player
    Player player1;


    //mengisi data pemain
    player1.health = 100;
    player1.name = "Dhani";
    player1.score = 99.998;

    //menampilkan informasi pemain
    cout << "Nama Pemain: " << player1.name << endl;
    cout << "Kesehatan Pemain: " << player1.health << endl;
    cout << "Score yang di peroleh: " << player1.score << endl;
    cout << "\n";
    
    //membuat objek player 2
    Player player2;

    // Mengisi data pemain 
    player2.health = 100;
    player2.name = "Rian";
    player2.score = 80.99;

    // Menampilkan informasi pemain
    cout << "Nama Pemain 2: " << player2.name << endl;
    cout << "Kesehatan Pemain 2:" << player2.health << endl;
    cout << "Score yang di peroleh: " << player2.score << endl;
    cout << "\n";

    // Mengubah status pemain setelah menerima damage
    player1.health -= 20;
    player1.score -= 50;

    player2.health -= 20;
    player2.score -= 50;

    //menampilkan informasi setelah damage
    cout << "Kesehatan Pemain 1 setelah diserang: " << player1.health << endl;
    cout << "Score Pemain 1 setelah diserang: " << player1.score << endl;
    cout << "Kesehatan Pemain 2 setelah diserang: " << player2.health << endl;
    cout << "Score Pemain 2 setelah diserang: " << player2.score << endl;
    
    return 0;
}