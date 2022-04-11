#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std::size_t n )
{
    if (n == 0){
        return std::make_pair(-1, -1);
    }

    int termo_menor = V[0];
    int termo_maior = V[0];
    
    for (int i = 1; i < n; i++){
        if (termo_menor > V[i]){
            termo_menor = V[i];
        }

        if (termo_maior < V[i]){
            termo_maior = V[i];
        }
    }

    return std::make_pair(termo_menor, termo_maior);
}
