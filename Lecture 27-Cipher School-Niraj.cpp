/*
    String is a charater array.
    String has a null charcter at the end " /0 "
    we learned to use getline and length function
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    // string name;
    // cin>>name;
    // for(int i =0;i<6;i++){
    //     cout<<name[i];
    // }
    // cout<<endl;

    string a,b,c;

    getline(cin,a);
    getline(cin,b);
    
    cout<<"The string are: "<<a<<" "<<b<<endl;

    c = a+b;
    cout<<"Concationation of a and b is: "<<c<<endl;

    cout<<"Length of string a and b is: "<<c.length()<<endl;

    return 0;
}
