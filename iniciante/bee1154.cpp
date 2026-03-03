#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int age;
    int counter = 0;
    double sum = 0;
    while (cin >> age && age >= 0) {
        sum += age;
        counter++;
    }

    double media = sum / counter;
    cout << fixed << setprecision(2) << media << endl;
    return 0;
}