#include <iostream>
using namespace std;

void inputVector(int vec[], int length);
void sumVectors(int vec1[], int vec2[], int result[], int length);

int main() {
    int length;
    cout << "Enter the length of the vectors: ";
    cin >> length;

    int vector1[length], vector2[length], result[length];

    cout << "Enter the elements of the first vector:\n";
    inputVector(vector1, length);

    cout << "Enter the elements of the second vector:\n";
    inputVector(vector2, length);

    sumVectors(vector1, vector2, result, length);

    cout << "The sum of the vectors is:\n";
    for (int i = 0; i < length; i++) {
        cout << result[i] << " ";
    }

    return 0;
}

void inputVector(int vec[], int length) {
    for (int i = 0; i < length; i++) {
        cin >> vec[i];
    }
}

void sumVectors(int vec1[], int vec2[], int result[], int length) {
    for (int i = 0; i < length; i++) {
        result[i] = vec1[i] + vec2[i];
    }
}