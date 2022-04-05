#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void){
    int cont = 0;
    int numero;

    for(int i = 0; i < 5; i++){
        cin >> numero;
        if (numero < 0){
            cont++;
        }
    }

    cout << cont;

    return 0;
}
