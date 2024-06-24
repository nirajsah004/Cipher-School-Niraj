/* i learned about garbage value in this lecture and more about how to used parameters then we learned about
local variable they are called local as they are restricted between parenthesis a variable defined inside a 
function is called local variable*/

#include <iostream>
using namespace std;


void printHi(){
    cout<<"Hi"<<endl;
}
int sum(int a,int b){
    return a+b;
}

int main(){
    printHi();
    int a,b;
    a = 10;
    b = 20;
    int d = sum(a,b);
    cout<<d<<"Value of a is: "<<a;

    return 0;
}
