#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double N[100], t;
    cin >> t;

    cout << fixed << setprecision(4);

    for (int i = 0; i < 100; i++) {
        N[i] = t;
        t /= 2;
        cout << "N[" << i << "] = " << N[i] << endl;
    }   
}