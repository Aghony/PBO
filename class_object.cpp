#include <iostream>

using namespace std;

class Player {
    public:
    int health;
    string name;
};

int main () {
    //membuat objek player
    Player player1;


    //mengisi data pemain
    player1.health = 100;
    player1.name = "Dhani";

    //menampilkan informasi pemain
    cout << "Nama Pemain: " << player1.name << endl;
    cout << "Kesehatan Pemain: " << player1.health << endl;

    //Mengubah status pemain setelah menerima damage 
    player1.health -= 20;

    // Mengubah status pemain setelah damage 
    cout << "Kesehatan Pemain setalah diserang " << player1.health << endl;

    return 0;
}