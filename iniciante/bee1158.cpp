#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        int x, y, c; cin >> x >> y;
        c = 0;
        while (c < y) {
            if (x % 2 != 0) {
                sum += x;
                c++;
            }
            x++;
        }
        cout << sum << endl;
    }
}