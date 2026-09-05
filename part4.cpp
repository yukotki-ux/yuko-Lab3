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
    int totalWholePizza = totalSlicesPizza / slicesPerPizza;
    int fullPizzaEaten = totalWholePizza;

    if(totalSlicesPizza % slicesPerPizza != 0){
        totalWholePizza++;
        fullPizzaEaten = totalWholePizza - 1;
    }

    int leftOverSlices = slicesPerPizza -  (totalSlicesPizza % slicesPerPizza);
    int additionalSlices = slicesPerPizza - leftOverSlices;

    cout << "\n\nYou will need to order " << totalWholePizza << " pizzas.";
    cout << "\nThere will be " << leftOverSlices << " leftover slices.";
    cout << "\nIt means " << fullPizzaEaten << " full pizzas will be eaten and " << additionalSlices << " slices will be needed from the last pizza.";

    return 0;
}