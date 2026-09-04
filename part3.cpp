#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const double rate = 0.075;

    double price;

    
    cout << fixed << setprecision(2);
    cout << "\nEnter the price of an item: ";
    cin >> price;

    if(price < 0) {
        cout << "\nThe price shouldn't be minus!";
        return 0;
    }

    double taxAmount = price * rate;
    double totalAmount = taxAmount + price;

    cout << "Original Price: " << "$ " << price << endl;
    cout << "Sales Tax: " << "$ "<< taxAmount << endl;
    cout << "Total Cost: " << "$ "<< totalAmount << endl;

    return 0;
}