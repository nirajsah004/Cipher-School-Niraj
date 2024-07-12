#include<iostream>
using namespace std;

void merge(int *arr,int start,int end){
    // here array is already sorted we need to combine the array here
    int mid =(start+end)/2;
    int len1,len2;
    len1 = mid-start+1;        // size of first array
    len2 = end-mid;

    //created new arrays of these lenggth to copy them here
    int* arr1 = new int[len1];
    int* arr2 = new int[len2];

    int index;
    index = start;
    int i;
    for(i =0;i<len1;i++){
        arr1[i] = arr[index];          // copying 1st half in array1
        index++;
    }
    
    for(i =0;i<len2;i++){
        arr2[i] = arr[index];          // copying 1st half in array1
        index++;
    }

    int index1,index2;
    index1 =0;
    index2 = 0;
    index =start;
    while(index1<len1 && index2<len2){
        if(arr1[index1]<arr2[index2]){
            arr[index] = arr1[index1];
            index++;
            index1++;
        }
        else{
            arr[index] = arr2[index2];
            index++;
            index2++;
        }
    }
    while(index1<len1){
         arr[index] = arr1[index1];
            index++;
            index1++;
    }
    while(index2<len2){
         arr[index] = arr2[index2];
            index++;
            index2++;
    }

}

void mergesort(int *arr,int start,int end){
    int mid;
    mid = (start+end)/2;

    if(start>=end){
        return; 
    }

    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,end);
}


int main(){
    int size = 5;
    int arr[size] = {11,2,53,14,5};

    mergesort(arr,0,4);

    for (int i = 0; i <size; i++)
    {cout<<arr[i]<<" ";
    }
    
    return 0;   
}
