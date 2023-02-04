/*
Author: Evan Lu
Course: CSCI-135
Instructor: Professor Maryash
Assignment:  Write a program that reads an integer and 
             prints whether it is negative, zero, or positive.
*/

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