#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    int a = 0;
    for (int i = 0; i < 1000; i++) {
        cout << "N[" << i << "] = " << a << endl;
        if (a == t - 1) {
            a = 0;
        } else {
            a++;
        }
    }
    return 0;
}