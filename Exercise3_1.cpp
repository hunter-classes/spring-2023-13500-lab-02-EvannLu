/*
Author: Evan Lu
Course: CSCI-135
Instructor: Professor Maryash
Assignment:  Write a program that reads an integer and 
             prints whether it is negative, zero, or positive.
*/

#include <iostream>

int main(){ 
    int input; 

    std::cout << "Enter a  integer: ";
    std::cin >> input; 

    if(input == 0){
        std::cout << input << " is zero"; 
    } else if(input > 0){
        std::cout << input << " is positive";
    } else {
        std::cout << input << " is negative";
    }

    return 0; 
}