#include <iostream>

using namespace std;

// Questions
// 1. Buatlah sebuah kelas Player yang memiliki atribut name(nama) dan health (Kesehatan)
// 2. Implementasikan konstruktor untuk menginisialisasi atribut name dan health saat objek di buat
// 3. Buatlah method attack() untuk mengurangi kesehatan musuh sebesar 10 setiap kali di serang
// 4. Implementasikan method displayHealth() untuk menampilkan status kesehatan karakter

class Player{
    public:
    string name;
    int health;

    Player(string name_player, int health_player) {
        name = name_player;
        health = health_player;
    }

    void attack(){
        health -= 10;

        cout << name << " menyerang musuh!" << endl;
        cout << "Health berkurang 10." << endl;
    }

    void displayHealth() {
        cout << "Health " << name << ": " << health << endl;
    }
    
};

int main() {
    Player player_1("dhani", 100);
    
    player_1.displayHealth();
    
    player_1.attack();
    player_1.displayHealth();
    
    player_1.attack();
    player_1.displayHealth();

    return 0;
}