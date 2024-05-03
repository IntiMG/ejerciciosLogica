#include <iostream>
using namespace std;

void calculateGrades(double grades[8], int& passed, int& failed, double& average);

int main() {
    double grades[8];
    int passed = 0, failed = 0;
    double average = 0.0;

    for(int i = 0; i < 8; i++){
        cout << "Enter the grade for student " << i+1 << ": ";
        cin >> grades[i];
    }

    calculateGrades(grades, passed, failed, average);

    cout << "Number of students who passed: " << passed << endl;
    cout << "Number of students who failed: " << failed << endl;
    cout << "Average grade of the group: " << average << endl;

    return 0;
}

void calculateGrades(double grades[8], int& passed, int& failed, double& average) {
    double sum = 0.0;
    for(int i = 0; i < 8; i++){
        sum += grades[i];
        if(grades[i] >= 70) {
            passed++;
        } else {
            failed++;
        }
    }
    average = sum / 8;
}