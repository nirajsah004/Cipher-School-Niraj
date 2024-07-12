#include<iostream>
using namespace std;

void merge(int *arr,int start,int end){
    // here array is already sorted we need to combine the array here



}

void mergesort(int *arr,int start,int end){
    int mid;
    mid = (start+end)/2;

    if(start>=end){
        return; 
    }

    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);

}


int main(){
    int size = 5;
    int arr[size] = {11,2,53,14,5};

    mergesort(arr,0,size-1);

    return 0;   
}
