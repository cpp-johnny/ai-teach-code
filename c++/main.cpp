#include <iostream>  // Include the standard input-output stream library
using namespace std;  // Use the standard namespace to avoid writing  before cout and endl


int main() {
    cout << "Hello, World!" << endl;  // Output Hello, World!
   
    // 1. Variables and Data Types
    int a = 5;       // Integer
    double b = 5.5;  // Floating point number
    char c = 'A';    // Character
    bool d = true;   // Boolean

    // // how to output a, b, c, and d?
    // cout << a << endl;  // Output the value of a
    // cout << b << endl;  // Output the value of b
    // cout << c << endl;  // Output the value of c
    // cout << d << endl;  // Output the value of d

    // however thats too long, so we can do this instead:
    cout << a << endl << b << endl << c << endl << d << endl;

    // 2. Input and Output
    cout << "Enter a number: ";  // Output a message to the user
    int number;  // Declare a variable to store the input
    cin >> number;  // Read the input from the user
    cout << "You entered: " << number << endl;  // Output the input

    // 3. if else statement
    int f = 2;
    int g = 3;
    if (f > g) {
        cout << "f is greater than g" << endl;
    } else {
        cout << "f is not greater than g" << endl;
    }

    // 4. for loop
    
    for (int i = 0; i < 4; i++) {
        cout << "i: " << i << endl;
    }

    // 5. while loop
    int i = 0;
    while (i < 4) {
        std::cout << "i: " << i << std::endl;
        i++;
    }

    // Difference between for and while loop
    // for loop is used when you know the number of iterations
    // while loop is used when you don't know the number of iterations

    return 0;  // Return 0 to indicate the program ended successfully

}
