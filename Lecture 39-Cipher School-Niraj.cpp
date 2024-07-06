/*
Buuble sort:
In this algorithm we compare the adjacent elements then interchange them
*/
#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    //descending order
    for(int i=0;i<n-1;i++){
        
        for(int j=0;j<n-i-1;j++){
            int temp;
            if(arr[j]<arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //ascending order
    for(int i=0;i<n-1;i++){
        
        for(int j=0;j<n-i-1;j++){
            int temp;
            if(arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
