#include <iostream>
#include <string>

using namespace std;

int main() {

    string l;
    int sum = 0;

    while (getline(cin, l)) {
        if (l == "caw caw") {
            cout << sum << endl;
            sum = 0;
        } else {
            if (l[0] == '*') sum += 4;
            if (l[1] == '*') sum += 2;
            if (l[2] == '*') sum += 1;
        }
    }

    return 0;
}