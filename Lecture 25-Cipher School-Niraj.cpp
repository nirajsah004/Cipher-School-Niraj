#include <iostream>
using namespace std;

void minAndmax(int a[],int *b,int *c){
    for(int i = 0;i<5;i++){
        if(a[i] < *b){
            *b = a[i];
        }
        else if(a[i] > *c){
            *c = a[i];
        }
    }


}

int main(){

    int arr[5];
    int min = 1000,max = 99;

    for (int i = 0;i<5;i++){
        arr[i] = i+100;
    }

    minAndmax(arr, &min, &max);
    cout<<min<<" "<<max;
    return 0;

}
