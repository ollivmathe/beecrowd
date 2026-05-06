#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int low = 0, lowIdx;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        
        if (i == 0 || arr[i] < low) {
            low = arr[i];
            lowIdx = i;
        }
    }

    cout << "Menor valor: " << low << endl;
    cout << "Posicao: " << lowIdx << endl;
    return 0;
}