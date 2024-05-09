/*Hacer un programa que sume los números pares comprendidos entre
100 y 200. */

#include <iostream>

using namespace std;

int main()
{

    int i = 100;
    while (i <= 200)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        i++;
    }

    return 0;
}