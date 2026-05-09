#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int SIZE = 12;

    char O;
    cin >> O;

    int c = 0;
    double R = 0, T;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> T;

            if (j > SIZE - i - 1) {
                R += T;
                c++;
            }
        }
    }

    cout << fixed << setprecision(1);

    if (O == 'S') {
        cout << R << endl;
    } else {
        cout << R / c << endl;
    }

    return 0;
}