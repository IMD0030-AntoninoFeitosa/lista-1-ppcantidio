/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;


int main(void)
{
    int SIZE = 5;
    int count[5];
    int total = 0;
    int x;

    while( cin >> std::ws >> x) {
        if(x >= 0 && x < 25) count[0]++;
        else if(x >= 25 && x < 50) count[1]++;
        else if(x >= 50 && x < 75) count[2]++;
        else if(x >= 75 && x < 100) count[3]++;
        else if(x < 0 || x >= 100) count[4]++;
    }

    for(int i = 0; i < SIZE; i++) {
        // o cast deveria ser static_cast<float>(count[i])
        std::cout << std::setprecision(4) << ((float)count[i]/(float)total)*100 << std::endl;
    }

    return 0;
}
