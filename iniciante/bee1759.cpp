#include <iostream>
#include <string>

int main() {
    int a; std::cin>>a;
    std::string s = "Ho ";
    std::string r = "";
    for (int i = 0; i < a - 1; i++) {
        r += s;
    }
    r += "Ho!";
    std::cout<<r<<"\n";
    return 0;
}