/*in this class we learned about recursion and what it is used for
it is do to perform a repetitive task*/
#include <iostream>
using namespace std;

int fiboo(int input){
    if(input == 0 || input ==1){        // this is the base case where fiboonaci stops its execution
        return 1;
    }
    int final_ans;
    final_ans = fiboo(input-1)+fiboo(input-2);
    return final_ans;
}

int main(){
    int input;
    cin>>input;
    cout<<fiboo(input);
    return 0;
}
