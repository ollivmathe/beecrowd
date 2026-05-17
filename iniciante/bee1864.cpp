#include <iostream>
#include <string>

int main(){
    std::string s="LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n; std::cin>>n;
    for(int i=0; i<n; i++){
        std::cout<<s[i];
    }
    std::cout<<"\n";
    return 0;
}