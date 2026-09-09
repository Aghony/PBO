#include <iostream>

using namespace std;

// Base Class
class item{
    protected:
    string name;
    double weight;

    public:
    // Constructor
    item(string nameItem, double weightItem){
        name = nameItem;
        weight = weightItem;
    };

    // Method displayInfo()
    void displayInfo() {
        cout << "Name Item      : " << name << endl;
        cout << "Weight         : " << weight << " kg" << endl;
    };
}; 

    // Derived Class
    class weapon : public item {
        private:
        int damage;
        int durability;
    

    public:
    // Constructor
    weapon(string weaponName, double weaponWeight, int weaponDamage, int weaponDurability) : item(weaponName, weaponWeight){
        damage = weaponDamage;
        durability = weaponDurability;
        }

        // Method displayWeaponInfo()
        void displayWeaponInfo() {
            displayInfo();
            cout << "Damage         : " << damage << endl;
            cout << "Durability     : " << durability << endl;
        }
    };

int main() {
    // Membuat objek weapon
    weapon sword("exalibur", 5.5, 100, 80);

    // Menampilkan informasi weapon
    sword.displayWeaponInfo();

    return 0;
}