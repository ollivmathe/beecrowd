#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int pa, pb;
        int y = 0;
        double g1, g2;
        cin >> pa >> pb >> g1 >> g2;

        while (pa <= pb) {
            pa += (int)(pa * g1 / 100.0);
            pb += (int)(pb * g2 / 100.0);
            y++;
            if (y > 100) {
                cout << "Mais de 1 seculo.\n";
                break;
            }
        }

        if (y <= 100) {
            cout << y << " anos.\n";
        }
    }
}