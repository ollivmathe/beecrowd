#include <iostream>
#include <string>

int main(){
    std::string d, n;
    while(d != "0" && n != "0"){
        std::cin>>d>>n;
        std::string o;
        for(int i=0; i<n.length(); i++){
            if(n[i] != d[0]){
                o+=n[i];
            }
        }
        std::cout<<o<<"\n";
    }
    return 0;
}