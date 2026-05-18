#include <iostream>

int main(){
    int n; std::cin>>n;
    for(int i=0; i<n; i++){
        int a,b,r;
        std::cin>>a>>b;
        while(b!=0){
            r=a%b;
            a=b;
            b=r;
        }
        std::cout<<a<<"\n";
    }
    return 0;
}