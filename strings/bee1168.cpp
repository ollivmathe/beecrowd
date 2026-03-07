#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        long long l = 0;
        for (char c : s)
        {
            switch (c)
            {
            case '1':
                l += 2;
                break;
            case '2':
            case '3':
            case '5':
                l += 5;
                break;
            case '4':
                l += 4;
                break;
            case '6':
            case '9':
            case '0':
                l += 6;
                break;
            case '7':
                l += 3;
                break;
            case '8':
                l += 7;
                break;
            }
        }

        cout << l << " leds\n";
    }
}