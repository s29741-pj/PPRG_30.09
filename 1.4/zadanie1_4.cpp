#include <iostream>
#include <list>
using namespace std;

// Napisz program do znajdowania największej 
// liczby wśród trzech liczb, podanych przez 
// użytkownika. (3 rozwiązania)

int main() {

int numberOne;
int numberTwo;
int numberThree;

int biggerNum;

cout << "Podaj 3 liczby: ";

cin >> numberOne >> numberTwo >> numberThree;

if(numberOne > numberTwo){
    biggerNum = numberOne;

    if (biggerNum > numberThree)
    {
        cout << "Największa liczba to: " << biggerNum;
    }
    else {
        biggerNum = numberThree;
        cout << "Największa liczba to: " << biggerNum;
    }
    
}
else {
    biggerNum = numberTwo;

     if (biggerNum > numberThree)
    {
        cout << "Największa liczba to: " << biggerNum;
    }
    else {
        biggerNum = numberThree;
        cout << "Największa liczba to: " << biggerNum;
    }

}

return 0;

}