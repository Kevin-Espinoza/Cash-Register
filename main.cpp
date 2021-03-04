
// main.cpp
// TODO: Split files once the program works

#include <iostream>

#include "Register.h"
#include "registerState.h"




int main(){

    Register registerObj;  
    int register_state = 0; 

    std::cout << "Welcome to your register. Would you like to checkout or add money?\n";
    std::cout << "1: Checkout    2: Add Money\n";
    std::cin >> register_state;

    // Check user input and run proper program state
    switch (register_state){

        case (1):
            checkout(registerObj);
            break;

        case (2):
            addMoney(registerObj);
            break;

        default:
            std::cout << "Error: invalid input.\n";
    }



    return 0;
}
