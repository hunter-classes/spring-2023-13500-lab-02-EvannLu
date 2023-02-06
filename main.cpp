/*
Author: Evan Lu
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task B. Print all integers from the requested interval.
*/

#include <iostream>
#include "funcs.h" 

int main(){
    int L; int U; 
    std::cout << "Please enter L: "; 
    std::cin >> L; 

    std::cout << "Please enter U: "; 
    std::cin >> U; 

    print_interval(L,U);
    return 0; 
}

//Recall that you can compile this program by typing g++ main.cpp funcs.cpp and then running ./a.out.