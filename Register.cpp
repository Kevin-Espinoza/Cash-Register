
// register.cpp
#include "Register.h"
#include <iostream>


// Default Constructor
Register::Register () {}
// Custom Constructor
Register::Register (int bills_hundreds, int bills_fifties, int bills_twenties, int bills_tens, 
          int bills_fives, int bills_ones, int coins_quarters, int coins_dimes, 
          int coins_nickels, int coins_pennies) :
          _bills_hundreds(bills_hundreds), _bills_fifties(bills_fifties), 
          _bills_twenties(bills_twenties), _bills_tens(bills_tens), _bills_fives(bills_fives), _bills_ones(bills_ones), 
          _coins_quarters(coins_quarters), _coins_dimes(coins_dimes), _coins_nickels(coins_nickels), _coins_pennies(coins_pennies) {}


// Updaters: The Register only lets you add or remove money, it does not let you explicitly change a value
void Register::bills_hundreds(int change) { _bills_hundreds += change; }
void Register::bills_fifties(int change)  { _bills_fifties += change; }
void Register::bills_twenties(int change) { _bills_twenties += change; }
void Register::bills_tens(int change)     { _bills_tens += change; }
void Register::bills_fives(int change)    { _bills_fives += change; }
void Register::bills_ones(int change)     { _bills_ones += change; }
void Register::coins_quarters(int change) { _coins_quarters += change; }
void Register::coins_dimes(int change)    { _coins_dimes += change; }
void Register::coins_nickels(int change)  { _coins_nickels += change; }
void Register::coins_pennies(int change)  { _coins_pennies += change; }


// Getters: Returns the number of bills/coins of that denomination
int Register::bills_hundreds() { return _bills_hundreds; }
int Register::bills_fifties()  { return _bills_fifties; }
int Register::bills_twenties() { return _bills_twenties; }
int Register::bills_tens()     { return _bills_tens; }
int Register::bills_fives()    { return _bills_fifties; }
int Register::bills_ones()     { return _bills_ones; }
int Register::coins_quarters() { return _coins_quarters; }
int Register::coins_dimes()    { return _coins_dimes; }
int Register::coins_nickels()  { return _coins_nickels; }
int Register::coins_pennies()  { return _coins_pennies; }


// Empty(): Check if a certain denomitaion is empty, if so add 5 to that denomination
// Checks if the register has less than 1 in case the register owes the customer money
void Register::bills_hundreds_empty() { if (_bills_hundreds < 1) _bills_hundreds += 5; }
void Register::bills_fifties_empty()  { if (_bills_fifties < 1) _bills_fifties += 5; }
void Register::bills_twenties_empty() { if (_bills_twenties < 1) _bills_twenties += 5; }
void Register::bills_tens_empty()     { if (_bills_tens < 1) _bills_tens += 5; }
void Register::bills_fives_empty()    { if (_bills_fives < 1) _bills_fives += 5; }
void Register::bills_ones_empty()     { if (_bills_ones < 1) _bills_ones += 5; }
void Register::coins_quarters_empty() { if (_coins_quarters < 1) _coins_quarters += 5; }
void Register::coins_dimes_empty()    { if (_coins_dimes < 1) _coins_dimes += 5; }
void Register::coins_nickels_empty()  { if (_coins_nickels < 1) _coins_nickels += 5; }
void Register::coins_pennies_empty()  { if (_coins_pennies < 1) _coins_pennies += 5; }


// TODO: Make these print properly and try making an Operator Overload function
// Print the Register
void Register::print(){
    std::cout << "Hundreds: " << _bills_hundreds << "\nFifties: " << _bills_fifties << 
                 "\nTwenties: " << _bills_twenties << "\nTens: " << _bills_tens << 
                 "\nFives" << _bills_fives << "\nOnes: " << _bills_ones << 
                 "\nQuarters: " << _coins_quarters << "\nDimes: " << _coins_dimes <<
                 "\nNickels: " << _coins_nickels << "\nPennies: " << _coins_pennies;
}

