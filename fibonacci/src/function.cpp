#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    vector<unsigned int> vetor;

    int num_1 = 1, num_2 = 1, num_temp = 0;

    for (int i = 1; i < n; i++){
        if (i == 1){
            vetor.push_back(num_1);
            continue;        
        }
        if (i == 1){ // é sempre falso e desse modo todas as saídas para n>=1 está incorretas
            vetor.push_back(num_2);
        }

        num_temp = num_1 + num_2;

        vetor.push_back(num_temp);
        
        num_1 = num_2;
        num_2 = num_temp;
        
    }
    return vetor;
}
