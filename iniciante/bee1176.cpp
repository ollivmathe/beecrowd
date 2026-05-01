#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        unsigned long long a = 0, b = 1, c = 0;

        if (n == 0) {
            c = 0;
        } else if (n == 1) {
            c = 1;
        } else {
            for (int i = 2; i <= n; i++) {
                c = a + b;
                a = b;
                b = c;
            }
        }

        cout << "Fib(" << n << ") = " << c << endl;
    }

    return 0;
}