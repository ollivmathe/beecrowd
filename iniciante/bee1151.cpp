#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a = 0; int b = 1;

    if (n == 1) {
        cout << a;
    }

    else if (n >= 2) {
        cout << a << " " << b;
    }

    for (int i = 0; i < n - 2; i++) {
        int c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }

    cout << endl;
    return 0;
}