/*Hacer un programa que sume los números pares comprendidos entre
100 y 200. */
#include <iostream>

int main() {
    int sum = 0;
    for (int i = 100; i <= 200; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    std::cout << "The sum of even numbers between 100 and 200 is " << sum << std::endl;

    return 0;
}