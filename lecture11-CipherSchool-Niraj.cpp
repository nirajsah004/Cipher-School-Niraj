
/* 
   In this lecture, we are discussing while loops.
   We will then implement while loops in C++.
*/

#include <iostream>
using namespace std;

int main() {
    // Example of a while loop
    int a = 1;              // Initialization
    while (a <= 10) {       // Condition
        cout << a << " ";   // Body of the loop
        a++;                // Updation
    }
    cout << endl;           // New line after loop completion

    // Example of a for loop with a break condition
    int c;
    for (int i = 0; i < 100; i++) { // Loop runs up to 100 times
        cin >> c;                   // Take input from the user
        if (c == 10) {              // Check if input is 10
            cout << "You found it!" << endl; // Print message
            break;                  // Exit the loop
        }
    }

    return 0;
}
