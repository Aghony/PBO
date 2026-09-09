#include <iostream>

using namespace std;

// Base Class
class NPC{
    protected:
    string name;
    string location;

    public:
    // Constructor
    NPC(string nameNPC, string locationNPC) {
        name = nameNPC;
        location = locationNPC;
    }

    // Method
    void introduce() {
        cout << "Halo, saya " << name << "." << endl;
        cout << "Saya berada di " << location << "."<< endl;
    }
};

class Merchant : public NPC {
    private: 
    int coinPurse;

    public:
    //Constructor
    Merchant(string nameMerchant, string locationMerchant, int coins) : NPC(nameMerchant, locationMerchant)  {
        coinPurse = coins; 
    }

    // Method
    void trade() {
        cout << name << " sedang melakukan transaksi." << endl;
        cout <<"Coin yang dimiliki: " << coinPurse << endl;
    }
};

class Blacksmith : public Merchant {
    private: 
    int smithinglevel;

    public:
    // Constructor
    Blacksmith(string blacksmithName, string blacksmithLocation, int coins, int level) 
    : Merchant(blacksmithName, blacksmithLocation, coins) {
        smithinglevel = level;
    }

    // Method
    void repaireArmor() {
        cout << name << " sedang memperbaikin armor permain." << endl;
        cout << "Smithing Level: " << smithinglevel << endl;
    }
};

int main() {
    // Membuat objek Blacksmith
    Blacksmith blacksmith ("thor", "Iron Forge", 500, 10);

    // Method dari npc
    blacksmith.introduce();

    // Method dari Merchant
    blacksmith.trade();

    // Method dari Blacksmith
    blacksmith.repaireArmor();

    return 0;
}