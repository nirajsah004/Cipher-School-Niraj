/*
   In this class, we discussed while loops and do-while loops.
*/

#include <iostream>
using namespace std;

int main() {
    /* ---WHILE LOOP---
       The while loop will keep asking the user to enter a password 
       until the password is greater than or equal to 9999.
    */
    int password;
    cout << "Enter a password: " << endl;
    cin >> password;

    while (password < 9999) {
        cout << "Password is too short, re-enter it: " << endl;
        cin >> password;
    }
    cout << "Password Entered: " << password << endl;

    /* ---DO-WHILE LOOP---
       The do-while loop ensures that the user is prompted to enter the password 
       at least once and keeps asking until the password is greater than or equal to 9999.
    */
    cout << "Enter a password again using do-while loop: " << endl;

    do {
        cin >> password;
        if (password < 9999) {
            cout << "Password is too short, re-enter it: " << endl;
        }
    } while (password < 9999);

    cout << "Password Entered: " << password << endl;

    /* ---INFINITE LOOP WITH BREAK CONDITION---
       This do-while loop will print "Ice Cream " indefinitely, 
       but we break out of the loop after printing it 100 times.
    */
    int count = 0;
    do {
        cout << "Ice Cream ";
        count++;
        if (count == 100) break;
    } while (true); // true is always true, making this loop infinite unless we break out

    cout << endl;

    /* ---FOR LOOP WITH BREAK CONDITION---
       This for loop will print numbers starting from 0 indefinitely,
       but we break out of the loop when the number exceeds 100.
    */
    for (int i = 0; ; i++) {
        cout << i << " ";
        if (i > 100) break;
    }

    cout << endl;

    return 0;
}
