/*
Author: Evan Lu
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task B. Print all integers from the requested interval.
*/

#include <iostream> 
#include "funcs.h"

void print_interval(int L, int U){
    for (int i=L; i<U; i++){
        std::cout << i << " ";
    }
}