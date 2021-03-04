
// registerState.cpp

#include <iostream>

#include "registerState.h"
#include "Register.h"


//TODO: Make the program come up with random numbers instead of using a static value
void checkout(Register &r){
    
    std::cout << "CHECKOUT \n";
    std::cout << "Your total is: 132.57";


}

void addMoney(Register &r){

    int mod_temp = 0;
    double money_to_add = 0;  

    std::cout << "ADD MONEY \n";
    std::cout << "How much money would you like to add? ";
    std::cin >> money_to_add;

    // Calculate how much money is given and update Register to give proper change.
    // Hundreds
    if (money_to_add > 99){
        mod_temp = money_to_add / 100;
        money_to_add -= mod_temp * 100;
        r.bills_hundreds(mod_temp);
        mod_temp = 0;
    }
    // Fifties
    if (money_to_add > 49){
        mod_temp = money_to_add / 50;
        money_to_add -= mod_temp * 50;
        r.bills_fifties(mod_temp);
        mod_temp = 0;
    }
    // Twenties
    if (money_to_add > 19){
        mod_temp = money_to_add / 20;
        money_to_add -= mod_temp * 20;
        r.bills_twenties(mod_temp);
        mod_temp = 0;
    }
    // Tens
    if (money_to_add > 9){
        mod_temp = money_to_add / 10;
        money_to_add -= mod_temp * 10;
        r.bills_tens(mod_temp);
        mod_temp = 0;
    }
    // Fives
    if (money_to_add > 4){
        mod_temp = money_to_add / 5;
        money_to_add -= mod_temp * 5;
        r.bills_fives(mod_temp);
        mod_temp = 0;
    }
    // Ones
    if (money_to_add > 1){
        mod_temp = money_to_add / 1;
        money_to_add -= mod_temp * 1;
        r.bills_ones(mod_temp);
        mod_temp = 0;
    }
    // Quarters
    if (money_to_add >= .25){
        mod_temp = money_to_add / .25;
        money_to_add -= mod_temp * .25;
        r.coins_quarters(mod_temp);
        mod_temp = 0;
    }
    // Dimes
    if (money_to_add >= .10){
        mod_temp = money_to_add / .1;
        money_to_add -= mod_temp * .1;
        r.coins_dimes(mod_temp);
        mod_temp = 0;
    }
    // Nickels
    if (money_to_add >= .05){
        mod_temp = money_to_add / .05;
        money_to_add -= mod_temp * .05;
        r.coins_nickels(mod_temp);
        mod_temp = 0;
    }
    // Pennies
    if (money_to_add >= .01){
        mod_temp = money_to_add / .01;
        money_to_add -= mod_temp * .01;
        r.coins_pennies(mod_temp);
    }
}