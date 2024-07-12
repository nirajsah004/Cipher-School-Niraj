#include <iostream>
using namespace std;


void attendclass(int start[],int end[],int class_id[]){
    cout<<"Class are: "<<class_id[0]<<endl;
    int end_of_current= end[0];
    for(int i=1;i<9;i++){
        if(start[i]>=   end_of_current){
            cout<<"Class are: "<<class_id[i]<<endl;
            end_of_current = end[i];          
        }
    }

}
int main(){
    int start[10] = {2,2,4,1,5,8,9,11,13};
    int end[10] = {3,5,7,8,9,10,11,14,16};
    int class_id[10] = {4,2,3,1,5,6,7,8,9} ;

    attendclass(start,end,class_id);

    return 0;
}
