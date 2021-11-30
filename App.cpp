/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ryan Turner
 */


//Header file.
#include "std_lib_facilities.h" 

int ParseInput(string s);
int GetDigit(string s);

int main()
{
	double temp;
	int digit1, digit2;
	string operation;

	string val1, val2;
	
	cout << "Please enter two digits between 0 and 9. Decimals are valid: ";  
    cin >> val1 >> val2;
    cout << "Please enter the operation you would like to perform (+, -, /, *)";
    cin >> operation;   
    
	digit1 = ParseInput(val1);
	digit2 = ParseInput(val2);


    if (operation == "+") {
        cout << "The sum of " << digit1 << " and " << digit2 << " is " << (digit1 + digit2) << ".\n";
    } else if (operation == "-") {
        int result = digit1 - digit2;
        cout << "The difference of " << digit1 << " and " << digit2 << " is " << result << ".";
    } else if (operation == "*") {
        int result = digit1 * digit2;
        cout << "The product of " << digit1 << " and " << " is " << result << ".";
    } else if (operation == "/") {
        if (digit2 == 0) {
            cout << "Cannot divide by zero";
        } else {
            int result = digit1 / digit2;
            cout << "The quotient of " << digit1 << " and " << digit2 << " is " << result;
        }
    } else {
        cout << "Invalid operation";
    }
	return 0; 		
}