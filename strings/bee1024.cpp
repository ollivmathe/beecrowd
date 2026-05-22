#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string s;

    int n; std::cin>>n;
    std::cin.ignore();

    while(n--){
            getline(std::cin, s);

        for(int i=0; i<s.length(); i++){
            if(isalpha(s[i])){
                s[i]+=3;
            }
        }
        std::reverse(s.begin(), s.end());

        for(int i=s.length()/2; i<s.length(); i++){
            s[i]-=1;
        }

        std::cout<<s<<"\n";
    }
    return 0;
}