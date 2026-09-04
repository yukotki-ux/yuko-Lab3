#include <iostream>
using namespace std;

int main() {

    int numOfPeople;
    int slicesPerPizza;
    int slicesPerPerson;

    cout << "\nHow many people will be attending to the pizza party? ";
    cin >> numOfPeople;
    cout << "\nHow many slices of pizza are included in each pizza? ";
    cin >> slicesPerPizza;
    cout << "\nHow many slices of pizza will each person eat? ";
    cin >> slicesPerPerson;

    int totalSlicesPizza = numOfPeople * slicesPerPerson;
    int totalWholePizza = totalSlicesPizza / slicesPerPizza + 1;

    int leftOverSlices = totalWholePizza * slicesPerPizza % totalSlicesPizza;

    cout << "\n\nYou will need to order " << totalWholePizza << " pizzas.";
    cout << "\nThere will be " << leftOverSlices << " leftover slices." << endl;
    
    return 0;
}