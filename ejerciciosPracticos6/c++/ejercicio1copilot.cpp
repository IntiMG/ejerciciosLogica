#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a natural number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "The sum of natural numbers up to " << n << " is " << sum << endl;

    return 0;
}