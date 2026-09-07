#include <iostream>

using namespace std;

// Question
// Buatlah class item yang memiliki atribut name(string), quantity(int), dan price(double)
// Buatlah Constructor untuk menginisialisasi atribut name, quantity, dan price
// Buatlah Method useItem(Int amount): Mengurangi quantity sejumlah amount. Tampilkan Pesan jika stok tidak cukup, 
// addStock(int Amount): Menambahkan quantity 
// dan displayInfo(): menampilkan seluruh detail item dan total nilainya (quantity * price)
// Fungsi main(), buat minimal 2 objek item berbeda dan uji semua method yang ada.

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


    void useItem(int amount ) {
        if(amount <= quantity ) {
            cout << "Stock "
        }
    }   
};

int main(){

}