#include <iostream>
#include <string>

int main() {
    int T; std::cin>>T;
    for (int i=0; i<T; i++) {
        std::string R;
        std::string s, r;
        std::cin>>s>>r;

        if (s == "pedra" && (r == "tesoura" || r == "lagarto")) R = "Bazinga!";
        else if (s == "papel" && (r == "pedra" || r == "Spock")) R = "Bazinga!";
        else if (s == "tesoura" && (r == "papel" || r == "lagarto")) R = "Bazinga!";
        else if (s == "lagarto" && (r == "Spock" || r == "papel")) R = "Bazinga!";
        else if (s == "Spock" && (r == "tesoura" || r == "pedra")) R = "Bazinga!";
        else if (s == r) R = "De novo!";
        else R = "Raj trapaceou!";

        std::cout<<"Caso #" << (i+1) << ": " << R << "\n";
    }
    return 0;
}