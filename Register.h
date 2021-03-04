
// register.h

#ifndef REGISTER_H
#define REGISTER_H

#include <iostream>


class Register{
public:
    // Default Constructor
    Register () {}

    // Custom Constructor
    Register (int bills_hundreds, int bills_fifties, int bills_twenties, int bills_tens, 
              int bills_fives, int bills_ones, int coins_quarters, int coins_dimes, 
              int coins_nickels, int coins_pennies);

    // Updaters: The Register only lets you add or remove money, it does not let you explicitly change a value
    void bills_hundreds(int change);
    void bills_fifties(int change);
    void bills_twenties(int change);
    void bills_tens(int change);
    void bills_fives(int change);
    void bills_ones(int change);
    void coins_quarters(int change);
    void coins_dimes(int change);
    void coins_nickels(int change);
    void coins_pennies(int change);

    // Getters: Returns the number of bills/coins of that denomination
    int bills_hundreds();
    int bills_fifties();
    int bills_twenties();
    int bills_tens();
    int bills_fives();
    int bills_ones();
    int coins_quarters();
    int coins_dimes();
    int coins_nickels();
    int coins_pennies();


    // Empty(): Check if a certain denomitaion is empty, if so add 5 to that denomination
    // Checks if the register has less than 1 in case the register owes the customer money
    void bills_hundreds_empty();
    void bills_fifties_empty();
    void bills_twenties_empty();
    void bills_tens_empty();
    void bills_fives_empty();
    void bills_ones_empty();
    void coins_quarters_empty();
    void coins_dimes_empty();
    void coins_nickels_empty();
    void coins_pennies_empty();


    // Print the Register
    void print();

private:
    // These all have default values
    int _bills_hundreds { 0 };
    int _bills_fifties { 1 };
    int _bills_twenties { 5 };
    int _bills_tens { 6 };
    int _bills_fives { 12 };
    int _bills_ones { 20 };
    int _coins_quarters { 25 };
    int _coins_dimes { 25 };
    int _coins_nickels { 25 };
    int _coins_pennies { 35 };

};

#endif // REGISTER_H
