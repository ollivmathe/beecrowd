#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double M[12][12];

    int L;
    char T;

    cin >> L;
    cin >> T;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }

    double R = 0;

    for (int i = 0; i < 12; i++) {
        R += M[L][i];
    }

    cout << fixed << setprecision(1);

    if (T == 'S') {
        cout << R << endl;
    } else {
        cout << R / 12 << endl;
    }

    return 0;
}

// Possibilidade de descartar a matriz e apenas somar as entradas pertencentes ao input L.