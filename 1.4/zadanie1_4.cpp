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

cout << "Podaj 3 liczby" << endl;

cout << "Podaj liczbę 1: ";
cin >> numberOne;

cout << "Podaj liczbę 2: ";
cin >> numberTwo;

cout << "Podaj liczbę 3: ";
cin >> numberThree;


// rozwiązanie 3

// biggerNum = ((numberOne < numberTwo) && (numberTwo < numberThree) && (numberOne < numberThree)) ? numberThree : (numberOne < numberTwo) ? numberTwo : numberOne;

// cout << "Największa liczba z podanych to: " << biggerNum;


// rozwiązanie 2

// if((numberOne < numberTwo) && (numberTwo < numberThree) && (numberOne < numberThree)) {
//     cout << "Najwieksza liczba to liczba 3 o wartosci:" << numberThree;
// }
// else if(numberOne < numberTwo) {
//     cout << "Najwieksza liczba to liczba 2 o wartosci:" << numberTwo;
// }else {
//     cout << "Najwieksza liczba to liczba 1 o wartosci:" << numberOne;
// }



// rozwiązanie 1

// if(numberOne > numberTwo){
//     biggerNum = numberOne;

//     if (biggerNum > numberThree)
//     {
//         cout << "Najwieksza liczba to: " << biggerNum;
//     }
//     else {
//         biggerNum = numberThree;
//         cout << "Najwieksza liczba to: " << biggerNum;
//     }
    
// }
// else {
//     biggerNum = numberTwo;

//      if (biggerNum > numberThree)
//     {
//         cout << "Najwieksza liczba to: " << biggerNum;
//     }
//     else {
//         biggerNum = numberThree;
//         cout << "Najwieksza liczba to: " << biggerNum;
//     }

// }

return 0;

}