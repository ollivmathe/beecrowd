#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c && a != 0 && b != 0 && c != 0) {
        int d = sqrt((a * b * 100) / c);
        cout << d << endl;
    }
    return 0;
}