/* */

#include <iostream>
using namespace std;

int compare(int a,int b){

    if(a>b){
    return a;           //multiple return statements
    }
    else{
    return b;           //multiple return statements
    }
}

int main(){
    cout<<compare(4,5);

    return 0;
}
