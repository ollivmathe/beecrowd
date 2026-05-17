#include <iostream>
#include <climits>

int main() {
    int n, t; std::cin>>n;
    int min=INT_MAX, minIdx=1;
    for (int i=0; i<n; i++){
        std::cin>>t;
        if (t<min){
            min=t;
            minIdx=i+1;
        }
    }
    std::cout<<minIdx<<"\n";
    return 0;
}