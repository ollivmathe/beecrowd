#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int large = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x > large) {
                large = x;
            }
        }

        if (large >= 20) {
            cout << "3\n";
        } else if (large >= 10) {
            cout << "2\n";
        } else {
            cout << "1\n";
        }
    }
    return 0;
}