#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int SIZE = 12;
    int C = 0;
    double T, R = 0;
    char O;
    cin >> O;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> T;

            if (i + j > 11 && i > j) {
                R += T;
                C++;
            }
        }
    }

    cout << fixed << setprecision(1);

    if (O == 'S') {
        cout << R << endl;
    } else {
        cout << R / C << endl;
    }

    return 0;
}