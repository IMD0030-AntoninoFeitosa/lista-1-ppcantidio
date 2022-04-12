/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m = 0;    
    int n = 0;   
    int sum = 0;  
    int startingNumber = 0;

    while(std::cin >> m >> n) {
        startingNumber = m;
        sum = 0;

        if(n > 0) {  
            for(int count = 0; count < n; count++) {
                sum += startingNumber;
                startingNumber++;
            }
        } else if(n < 0) {
            int absn = n * (-1); 
            for(int count = 0; count < absn; count++) {
                sum += startingNumber;
                startingNumber--;
            }
        } else sum = m;

        std::cout << sum << std::endl;
    }

    return 0;
}