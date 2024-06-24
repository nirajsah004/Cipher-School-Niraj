/*
   In this lecture, we discussed functions and parameters used in functions. 
   We also learned about return types used in functions like int, float, and void. 
   We use void when we don't need to return any value from the function. 
   A function can have many return statements, but it can only return one value at a time.
*/

#include <iostream>
using namespace std;

// A function that prints a message and returns a string
string printStuff() {
    cout << "Hello ";
    return "Stuff";  // Return a string
}

// A parameterized function that takes two integers and returns their sum
int sum(int a, int b) {
    return a + b;  // Return the sum of a and b
}

// A void function that doesn't return any value
void printSum(int a, int b) {
    cout << "The sum of " << a << " and " << b << " is " << (a + b) << endl;
}

int main() {
    // Call the printStuff function and print the returned value
    cout << printStuff() << endl;

    // Call the sum function with arguments 2 and 4, and print the returned value
    cout << "The sum of 2 and 4 is " << sum(2, 4) << endl;

    // Call the printSum function with arguments 5 and 7
    printSum(5, 7);

    return 0;
}
