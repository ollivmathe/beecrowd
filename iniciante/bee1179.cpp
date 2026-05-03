#include <iostream>
#include <string>

using namespace std;

void print(string name, int arr[], int &increment) {
    for (int i = 0; i < increment; i++) {
        cout << name << "[" << i << "] = " << arr[i] << endl;
    }
    increment = 0;
}


int main() {

    int even[5], odd[5];
    int evenCurrent = 0, oddCurrent = 0;

    for (int i = 0; i < 15; i++) {
        int n; cin >> n;

        if (n % 2 == 0) {
            even[evenCurrent++] = n;
            if (evenCurrent == 5) print("par", even, evenCurrent);
        } else {
            odd[oddCurrent++] = n;
            if (oddCurrent == 5) print("impar", odd, oddCurrent);
        }
    }

    print("impar", odd, oddCurrent);
    print("par", even, evenCurrent);

    return 0;
}