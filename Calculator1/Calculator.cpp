#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;

  
    
    cout << "Enter a number: ";
    cin >> num1;

    // Get the two numbers
    cout << "Enter second numbers: ";
    cin >>  num2;

    cout << "Enter an operand (+,-,*,/)";
    cin >> op;


    
    if (op == '+') {
        cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    } 
    else if (op == '-') {
        cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    } 
    else if (op == '*') {
        cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
    } 
    else if (op == '/') {
        // Safety check for division by zero
        if (num2 == 0) {
            cout << "Error: Division by zero is not allowed!" << endl;
        } else {
            cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
        }
    } 
    else {
        // Handles any invalid operator input
        cout << "Error: Invalid operator entered." << endl;
    }

    return 0;
}
