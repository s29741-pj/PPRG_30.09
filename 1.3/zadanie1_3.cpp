#include <iostream>
using namespace std;



int main() {
    int number;

    cout << "Podaj liczbę całkowitą: ";
    cin >> number;

    if(number%2 == 0) {
        cout << "Liczba " << number << " jest parzysta." << endl;
    }


    if(number%2 != 0) {
        cout << "Liczba " << number << " jest nieparzysta." << endl;
    }

    if(number == 0) {
        cout << "Podana liczba to zero" << endl;
    }

    return 0;
}