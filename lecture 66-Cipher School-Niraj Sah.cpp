#include <iostream>
using namespace std;

int part(int *arr,int s,int e){

    int num=0;
    for(int i = s+1;i<e+1;i++){
        if(arr[i]<arr[s]){
            num++;
        }
    }
    int correct_index;
    correct_index = s+num;

    //swap
    int temp;
    temp = arr[s];
    arr[s] = arr[correct_index];
    arr[correct_index] = temp;

    int i,j;
    i=s;
    j=e;

    while(i<correct_index && j>correct_index){
        while(arr[i]<arr[correct_index]){
            i++;
        }
        while(arr[j]>arr[correct_index]){
            j--;
        }
        if(i<correct_index && j>correct_index){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    return correct_index;
}

void quicksort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int partition;     // this value is at its correct place 
    partition = part(arr,s,e);
    quicksort(arr,s,partition-1);
    quicksort(arr,partition+1,e);

}


int main(){


    int arr[7] = {5,1,4,6,2,90,0};
    int size = 7;

    quicksort(arr,0,size-1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
