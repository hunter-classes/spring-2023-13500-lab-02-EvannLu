/*
Author: Evan Lu
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task C. Using arrays to store, update, and retrieve numbers
*/

#include <iostream>

int main(){
    
    int myData[10];
    int index; 
    int value; 
    int i; 


    for(int i=0; i<10; i++){
        myData[i] = 1;
    }

    do {
        for(i=0; i<10; i++){
            std::cout << myData[i] << " ";
        }
        
        std::cout << "\nInput index: "; 
        std::cin >> index; 
        std::cout << "Input value: "; 
        std::cin >> value; 

        if(index >= 0 and index < 10){
            myData[index] = value; 
        } 
    } while(index >= 0 and index < 10); 

    std::cout << "\nIndex out of range. Exit." << std::endl; 

    return 0; 
}