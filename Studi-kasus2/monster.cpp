#include <iostream>
#include <vector>

using namespace std;

// Base Class
class Monster{
    protected:
    string monsterName;
    int level;

    public:
    // Constructor
    Monster(string name, int monsterLevel){
        monsterName = name;
        level = monsterLevel;
    }

    // Pure Virtual Function
    virtual void makeSound() = 0;

    // Virtual Destructor
    virtual ~Monster() {}
};

// Derived Class Goblin
class Goblin : public Monster {
    public:
    Goblin(string name, int level) : Monster(name, level){}

    // Override
    void makeSound() override{
        cout << monsterName << " (Level " << level << "): ";
        cout << "Ssshhh... " << endl;
    }
};

// Derived Class Dragon
class Dragon : public Monster {
    public: 
    Dragon(string name, int level) : Monster(name, level){}

    // Override
    void makeSound() override {
        cout << monsterName << " (level " << level << "): ";
        cout << "ROAAAAAARR!" << endl;
    }
};

int main() {

    // Vector pointer ke Base Class
    vector<Monster*> monsters;
    
    // Upcasting
    monsters.push_back(new Goblin("Goblin", 5));
    monsters.push_back(new Dragon("Dragon", 20));

    // Polymorphism
    for(Monster* monster: monsters){
        monster -> makeSound();
    }

    // Menghapus object
    for(Monster* monster: monsters){
        delete monster;
    }

    return 0;
}