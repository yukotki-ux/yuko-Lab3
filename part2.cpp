#include <iostream>
using namespace std;

int main() {
    
    int x;

    cout << "\nLet's enter your favorite integer!: " << endl;
    cin >> x;

    x = ( x * 2 + 10 ) / 2 - x;

    cout << "\n\nYou can't escape from the number..." << x << "!" << endl;


    return 0;
}