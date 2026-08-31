#include <iostream>

using namespace std;

int main() {

    const double rate = 0.075;

    double price;

    cout << 'Enter the price of an item: ';
    cin >> price;

    if(price < 0) {
        cout << ""
    }


    double taxAmount = price * rate;
    totalAmount = taxAmount + price;

    cout << "Original Price: " << price << endl;
    cout << "Sales Tax: " << taxAmount << endl;
    cout << "Total Cost: " << totalAmount << endl;



    return 0;
}