#include <iostream>
using namespace std;

int main () {
    int N[20];
    
    for (int i = 0; i < 20; i++) {
        cin >> N[i];
    }

    int last = 19;
    int tmp;
    for (int i = 0; i < 10; i++) {
        tmp = N[i];
        N[i] = N[last];
        N[last] = tmp;
        last--;
    }

    for (int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}