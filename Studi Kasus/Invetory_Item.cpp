#include <iostream>

using namespace std;

class invetory{
    private:
    string name;
    int quantity;
    double price;
    
    public:
    invetory(string name_item, int quantity_item, double price_item){
        name = name_item;
        quantity = quantity_item;
        price = price_item;
    }

    // Method UseItem (Int amount)
    void useItem(int amount ) {
        if(amount <= quantity ) {
            quantity -= amount;
            cout << amount << " " << name << " digunakan" << endl;
        }else {
            cout << " stok" << name << " tidak dicukup!" << endl;
        };
    }

    // Method addStock (Int amount)
    void addStock(int amount ) {
        quantity += amount; 
        cout << amount << " " << name << " bertambah" << endl;
    }

    // Menampilkan informasi item 
    void displayInfo() {
        double totalValue = quantity * price;
        cout << "Nama Item          : " << name << endl;
        cout << "Quantity Item      : " << quantity << endl;
        cout << "Price Item         : Rp " << price << endl;
        cout << "Total Nilai        : Rp " << totalValue << endl;
        cout << "....................................." << endl;
    }
};

int main(){
    invetory potion("Health Potion", 10, 5000);
    invetory sword("Exalibur Sword", 10, 1500);

    potion.displayInfo();
    sword.displayInfo();

    //menguji useItem()
    potion.useItem(3);
    sword.useItem(1);

    //menguji addStock()
    potion.addStock(5);
    sword.useItem(2);

    // Menampilkan informasi setelah perubahan
    potion.displayInfo();
    sword.displayInfo();

    return 0;
}