#include <iostream>
#include <typeinfo>
using namespace std;

// Napisz program, który sprawdzi, czy liczba 
// całkowita jest dodatnia, ujemna czy może jest 0. 


int main() {

     setlocale( LC_ALL, "" );
   int number;

   cout << "Podaj liczbe całkowitą: ";
   cin >> number;

   if(number > 0) {
        cout << "Liczba: " << number << " jest dodatnia." << endl;
   }

   
   if(number < 0) {
        cout << "Liczba: " << number << " jest ujemna." << endl;
   }

   
   if(number == 0) {
        cout << "Podana liczba to zero."<< endl;
   }

    return 0;
}
