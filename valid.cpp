/*
Author: Evan Lu
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task A. Input validation
*/

#include <iostream>
#include <cmath>

int main(){
    int input;

    std::cout << "Please enter an integer: "; 
    std::cin >> input; 

    while (input > 99 || input < 1){
        std::cout << "Please re-enter: ";
        std::cin >> input; 
    }

    std::cout << "Number squared is: " << pow(input, 2) << std::endl;
    
    return 0;
    
}