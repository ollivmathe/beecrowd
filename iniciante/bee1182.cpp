#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const int SIZE = 12;
    int C;
    double R = 0, V;
    char T;

    cout << fixed << setprecision(1);

    cin >> C;
    cin >> T;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> V;
            if (j == C) {
                R += V;
            }
        }
    }
    
    if (T == 'S') {
        cout << R << endl;
    } else {
        cout << R / SIZE << endl;
    }

    return 0;
}