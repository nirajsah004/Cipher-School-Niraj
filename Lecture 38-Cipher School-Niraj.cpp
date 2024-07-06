#include <iostream>
using namespace std;

int main(){

    int arr[10];
    for(int i =0;i<10;i++){
        cin>>arr[i];
    }
    int index = 0;
    for(int i =0;i<10-1;i++){    
        index = i;
        for(int j=i;j<10;j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;

    }
    for(int i = 0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
