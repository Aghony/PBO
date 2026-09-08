#include <iostream>
#include <vector>

using namespace std;

class Character{
    protected:
    string name;
    int health;

    public:
    Character(string namecharacter, int healthcharacter) {
        name = namecharacter;
        health = healthcharacter;
    }

    virtual void attack() = 0;
    
    virtual ~Character() {}
};

    class Warrior : public Character {
    private: 
    int shieldPower;
    

    public:
    Warrior(string characterName, int characterHealth, int shield)
    : Character(characterName ,characterHealth) {
        shieldPower = shield;
    }

    void attack() override{
        cout << "Warrior: " << name << " memukul dengan pedang!" << endl;
    }
};

class Mage : public Character {
    private: 
    int manaPower;

    public:
    Mage(string characterName, int characterHealth, int mana)
    : Character(characterName, characterHealth){
        manaPower = mana;
    }

    void attack() override {
        cout << "Mage " << name << " menembakkan bola api!" << endl;
    }
};

int main() {

    // Vector pointer Character
    vector<Character*> characters;

    // Membuat objek Warrior dan Mage
    characters.push_back(
        new Warrior("Arthas", 100, 50)
    );

    characters.push_back(
        new Mage("Merlin", 80, 100)
    );

    characters.push_back(
        new Warrior("Leon", 120, 70)
    );

    characters.push_back(
        new Mage("Luna", 90, 120)
    );

    // Memanggil attack() secara polymorphism
    cout << "=== CHARACTER ATTACK ===" << endl;

    for (Character* character : characters) {
        character->attack();
    }

    // Menghapus object dari memory
    for (Character* character : characters) {
        delete character;
    }

    return 0;
};