#include <iostream>

using namespace std;

// Questions
// 1. Buatlah kelas Character dengan atribut name(namakarakter), level(level), dan experience(Pengalaman)
// 2. Implementasikan konstruktor untuk menginisialisasi name,level(dimulai dari 1), dan experience(dimulai dari 0).
// 3. Buatlah method gainExperience() yang menambah pengalaman dan memeriksa apakah karakter sudah cukup untuk naik level (100 pengalaman untuk naik level)
// 4. Implementasikan method levelUp() untuk meningkatkan level karakter dan mengatur ulang pengalaman menjadi 0.

class Level{
    public:
    string name;
    int level;
    int experience;

    // Constructor
    Level(string characterName) {
        name = characterName;
        level = 1;
        experience = 0;
    }

    // Method gainExperience
    void gainExperience(int exp) {
        experience += exp;

        cout << name << " mendapatkan " << exp << " experience." << endl;

        // Cek apakah cukup untuk naik level
        if (experience >= 100) {
            levelUp();
        }
    }

    // Method levelUp
    void levelUp() {
        level++;
        experience = 0;

        cout << name << " naik ke level " << level << "!" << endl;
    }

    void displayStatus() {
        cout << "Nama       : " << name << endl;
        cout << "Level      : " << level << endl;
        cout << "Experience : " << experience << endl;
    }
};

int main() {
    Level character("Dhani");

    character.displayStatus();

    cout << endl;

    character.gainExperience(50);
    character.displayStatus();

    cout << endl;

    character.gainExperience(50);
    character.displayStatus();

    return 0;
}