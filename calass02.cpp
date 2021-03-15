#include <iostream>

using namespace std;
//cout << "Hello World" << endl;
//recibe 2 valores como param

int subAlg(int a, int b) {
    
    int value = 0;
    while (a > b) {
        b++;
        value++;
    }
    return value;
}

// int main() {
//   cout << "5 - 1  = " << subAlg(5, 1);//acá pasa los param
// }

//auque el resultado sea el mismo y visualmente haga la misma cosa. No
//es solo que el resultado sea el que uno quiere si no que interamente el code sea bueno
// por que así el nombre de la función sub > de restar y Alg > de algoritmos
// Consejo usar siempre el Ingles

//::Como multiplicamos 2 algoritmos sin multiplicar.

/*Mientras que a tenga valor, le restaremos hasta que tenga 0 se saldra del bucle while
*/

int mulAlg(int a, int b) {
    
    int value = 0;
    while (a) {
        a--;
        value += b;
    }
    return value;
}

int main() {
  cout << "5 - 1  = " << subAlg(5, 1) << endl;//acá pasa los param
  cout << "5 x 3  = " << mulAlg(5, 3) << endl;
}




