#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int cont = 0;
    int numero;

    for (int n = 0; n < SIZE; n++){
        cin >> numero;
        if (numero < 0){
            cont ++;
        }
    }
    
    cout << cont;

    return 0;
}
