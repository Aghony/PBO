#include <iostream>
#include <vector>

using namespace std;

class Monster{
    protected:
    string monsterName;
    int level;

    public:
    Monster(string name, int monsterLevel){
        monsterName = name;
        level = monsterLevel;
    }

    virtual void makeSound() = 0;
    virtual ~Monster() {}
};

class Goblin : public Monster {
    public:
    Goblin(string name, int level) : Monster(name, level){}

    void makeSound() override{
        cout << monsterName << " (Level " << level << "): ";
        cout << "Ssshhh... " << endl;
    }
};

class Dragon : public Monster {
    public: 
    Dragon(string name, int level) : Monster(name, level){}

    void makeSound() override {
        cout << monsterName << " (level " << level << "): ";
        cout << "ROAAAAAARR!" << endl;
    }
};

int main() {
    vector<Monster*> monsters;
    
    monsters.push_back(new Goblin("Goblin", 5));
    monsters.push_back(new Dragon("Dragon", 20));

    for(Monster* monster: monsters){
        monster -> makeSound();
    }

    for(Monster* monster: monsters){
        delete monster;
    }

    return 0;
}