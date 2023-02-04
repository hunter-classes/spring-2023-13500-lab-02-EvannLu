#include <iostream>

int main(){
    int a, b, c; 
    std::cout << "Enter numbers: "; 
    std::cin >> a >> b >> c; 

    if(a<b && a<c && b<c){
        std::cout << "increasing"; 
    } else if(a>b && a>c && b>c){
        std::cout << "decreasing";
    } else{
        std::cout << "neither";
    }

    return 0; 
}