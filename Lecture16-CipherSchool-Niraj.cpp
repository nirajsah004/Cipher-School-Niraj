/*in this lecture we discussed that the value we pass in paramters in main function are copied in the 
function parameters original values are not changed they are copied
types of parameter:
-->formal parameters(these are copied and used)
-->actual parameters

function prototypes is declared before the main function so that the compiler knows that that it exists in the code
it can be defined after main function
*/

#include <iostream>
using namespace std;
int sum(int a,int b);
int main(){

    cout<<sum(10,20);

    return 0;
}
int sum(int a,int b){
    return a+b;
}
