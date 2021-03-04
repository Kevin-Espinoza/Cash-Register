
// registerState.cpp

#include <iostream>
#include <cmath>

#include "registerState.h"
#include "Register.h"


//TODO: Make the program come up with random numbers instead of using a static value
void checkout(Register &r){
    
    int mod_temp = 0;
    double total = 132.57;

    std::cout << "\n\nCHECKOUT \n";
    std::cout << "Your total is: " << total;
    std::cout << "\nHow much will you pay? ";
    std::cin >> mod_temp;

    // Subtract the amount given from the total and give proper change.
    // mod_temp is used here to we don't make another variable, erase it after
    total = std::abs(total - mod_temp);
    mod_temp = 0;

    // Calculate how much money is owed and update Register to give proper change.
    // After removing a denomination, check to see if that denomination is empty. If so, increase by 5.
    // Hundreds
    if (total > 99){
        mod_temp = total / 100;
        total -= mod_temp * 100;
        r.bills_hundreds(mod_temp * -1);
        r.bills_hundreds_empty();
        mod_temp = 0;
    }
    // Fifties
    if (total > 49){
        mod_temp = total / 50;
        total -= mod_temp * 50;
        r.bills_fifties(mod_temp);
        r.bills_fifties_empty();
        mod_temp = 0;
    }
    // Twenties
    if (total > 19){
        mod_temp = total / 20;
        total -= mod_temp * 20;
        r.bills_twenties(mod_temp);
        r.bills_twenties_empty();
        mod_temp = 0;
    }
    // Tens
    if (total > 9){
        mod_temp = total / 10;
        total -= mod_temp * 10;
        r.bills_tens(mod_temp);
        r.bills_tens_empty();
        mod_temp = 0;
    }
    // Fives
    if (total > 4){
        mod_temp = total / 5;
        total -= mod_temp * 5;
        r.bills_fives(mod_temp);
        r.bills_fives_empty();
        mod_temp = 0;
    }
    // Ones
    if (total > 1){
        mod_temp = total / 1;
        total -= mod_temp * 1;
        r.bills_ones(mod_temp);
        r.bills_ones_empty();
        mod_temp = 0;
    }
    // Quarters
    if (total >= .25){
        mod_temp = total / .25;
        total -= mod_temp * .25;
        r.coins_quarters(mod_temp);
        r.coins_quarters_empty();
        mod_temp = 0;
    }
    // Dimes
    if (total >= .10){
        mod_temp = total / .1;
        total -= mod_temp * .1;
        r.coins_dimes(mod_temp);
        r.coins_dimes_empty();
        mod_temp = 0;
    }
    // Nickels
    if (total >= .05){
        mod_temp = total / .05;
        total -= mod_temp * .05;
        r.coins_nickels(mod_temp);
        r.coins_nickels_empty();
        mod_temp = 0;
    }
    // Pennies
    if (total >= .01){
        mod_temp = total / .01;
        total -= mod_temp * .01;
        r.coins_pennies(mod_temp);
        r.coins_nickels_empty();
    }

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
