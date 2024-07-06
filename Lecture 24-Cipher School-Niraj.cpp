#include <iostream>
using namespace std;

void swap(int *x,int *y){
    int c;
    c = *x;
    *x = *y;
    *y = c;
}

void sumOfArray(int arr[]){
    int sum = 0;
    for(int i=0;i<5;i++){
        sum += arr[i];
    }
    cout<<"Sum of the elements are: "<<sum;
}


int main(){
//  --> swapping using pointers:

    int a = 4,b = 10;
    cout<<"Values before swap are: "<<a<<" "<<b<<endl;

    swap(&a,&b);
    cout<<"Values after swap are: "<<a<<" "<<b<<endl;
 
//  -->passing array in other function

    int arr[5];
    for(int i = 0;i<5;i++){
        cin>>arr[i];
    }
    sumOfArray(arr);
 
 
    return 0;
}
