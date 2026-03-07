#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double s = 0;
    double x = 1.0;
    for (int i = 1; i <= 39; i += 2) {
        s += (double) i / x;
        x *= 2;
    }

    cout << fixed << setprecision(2) << s << endl;
    
    return 0;
}