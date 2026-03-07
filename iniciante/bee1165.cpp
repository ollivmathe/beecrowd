#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        bool prime = true;
        for (int j = 2; j * j <= x; j++) {
            if (x % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            cout << x << " eh primo\n";
        } else {
            cout << x << " nao eh primo\n";
        }
    }
    return 0;
}