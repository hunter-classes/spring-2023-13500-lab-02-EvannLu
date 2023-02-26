/*
Author: Evan Lu
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task D. Computing Fibonacci Numbers 
            with Loops and Arrays 0, 1, 1, 2, 3, 5, 8, 13…
*/

#include <iostream>

int main(){
    
    int fib[60]; 

    fib[0] = 0; 
    fib[1] = 1; 

    for(int i=2; i<60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i=0; i<60; i++){
        std::cout << fib[i] << std::endl;
    }

    return 0; 
}