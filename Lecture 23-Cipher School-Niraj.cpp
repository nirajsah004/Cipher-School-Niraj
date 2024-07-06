/*SCALE FACTOR*/
#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *p = &a;
    int arr[5];
    cout<<&a<<" adding value to pointer: "<<p+1<<endl;
    for(int i = 0;i<5;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<5;i++){
        cout<<&arr[i]<<" ";
    }
    return 0;
}
