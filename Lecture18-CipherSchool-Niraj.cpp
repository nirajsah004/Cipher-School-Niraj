/*in this lecture we learned about pass by reference where we pass adrress of variable*/
#include <iostream>
using namespace std;

void swap(int &a,int &b){       //pass by reference
    int c;
    c = a;
    a = b;
    b = c;
    cout<<"Values inside the function are: "<<a<<" "<<b<<endl;

}

int main(){
    int a=10,b=20;
    swap(a,b);
    cout<<"Values in main function are: "<<a<<" "<< b <<endl;
    return 0;
}
