#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int luckyNums[20] = {2, 4, 6, 8, 10, 12}; /*[20] tells c++ that you want to store 20 elements inside the array */

    cout << luckyNums[2] << endl;

    luckyNums[0] = 19;
    cout << luckyNums[0] << endl;

    return 0;
}