#include <iostream>
using namespace std;

int main () {
    int X[10];
    cin >> X[0];
    for (int i = 1; i < 10; i++) {
        X[i] = X[i - 1] * 2;
    }

    for (int i = 0; i < 10; i++) {
        cout << "N[" << i << "] = " << X[i] << endl;
    }

    return 0;
}