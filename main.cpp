#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double populationA, populationB, growthRateA, growthRateB;

    cout << "Enter the population of town A: ";
    cin >> populationA;
    cout << "Enter the growth rate of town A (%): ";
    cin >> growthRateA;

    cout << "Enter the population of town B: ";
    cin >> populationB;
    cout << "Enter the growth rate of town B (%): ";
    cin >> growthRateB;

    growthRateA /= 100;
    growthRateB /= 100;

    if (populationA < populationB && growthRateA <= growthRateB) {
        cout << "Town A will never surpass Town B with the current growth rates." << endl;
        return 0;
    }

    int years = 0;

    while (populationA < populationB) {
        populationA += populationA * growthRateA;
        populationB += populationB * growthRateB;
        years++;
    }

    cout << "After " << years << " years, Town A reached or exceeded Town B." << endl;
    cout << "Population of town A: " << floor(populationA) << endl;
    cout << "Population of town B: " << floor(populationB) << endl;

    return 0;
}
