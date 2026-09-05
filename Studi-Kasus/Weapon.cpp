// Question 1
//A. Buatlah kelas Weapon dengan atribut name (nama senjata) dan damage (kerusakan senjata).
//B. Implementasikan konstruktor untuk menginisialisasi value name dan damage senjata.
//C. Buatlah method attack() yang akan menampilkan pesan menyerang dan menunjukkan kerusakan yang diberikan oleh senjata.
//D. Buatlah objek Weapon dengan 3 nama dan kerusakan yang berbeda dan uji method attack().
#include <iostream>

using namespace std;

//Deklarasi Class
class Weapon {
    public :
    string name;
    int damage; 

    // Constructor
    Weapon(string name_weapon, int damage_weapon) {
            name = name_weapon;
            damage = damage_weapon;
    }

    // Method attack
    void attack() {
        cout << name << " Total Damage: " << damage << " damage! " << endl;
    }
};

int main() {
    
    Weapon WeaponCharacter_1("Pedang", 25);
    Weapon WeaponCharacter_2("Panah", 50);
    Weapon WeaponCharacter_3("Tombak", 10);

    WeaponCharacter_1.attack();
    WeaponCharacter_2.attack();
    WeaponCharacter_3.attack();
    
}