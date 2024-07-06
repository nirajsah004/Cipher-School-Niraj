/*Memory Management is very important in c++ and address is where it is stored(located) so we use " & " operator
the output we get form that is a hexadecimal value that is between 0-9 then a to f

*/
#include <iostream>
using namespace std;


int main(){

    int a;
    float b;
    cout<<"Address of variable is: "<<&a<<endl;
    cout<<"Address of variable is: "<<&b;
    
    return 0;
}
