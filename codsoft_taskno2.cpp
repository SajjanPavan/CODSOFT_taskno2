#include <iostream>

using namespace std;

// Function prototypes
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

int main() {
    double num1, num2, result;
    char operation;

    // Get user input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Display menu of operations
    cout << "\nChoose operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;

    // Get user choice
    cout << "Enter choice (1/2/3/4): ";
    cin >> operation;

    // Perform the selected operation
    switch (operation) {
        case '1':
            result = add(num1, num2);
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '2':
            result = subtract(num1, num2);
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '3':
            result = multiply(num1, num2);
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '4':
            if (num2 != 0) {
                result = divide(num1, num2);
                cout << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Cannot divide by zero." << endl;
            }
            break;
        default:
            cout << "Invalid input. Please enter a valid choice (1/2/3/4)." << endl;
            break;
    }

    return 0;
}

// Function definitions
double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    return x / y;
}