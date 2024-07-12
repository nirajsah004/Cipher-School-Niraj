    #include <iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int top;
    int size;

    stack(int s){
        top=-1;
        this->size = s;
        arr = new int[size]; 
    }

    void push(int data){
        if(size-top>1){
            top++;
            arr[top] = data;
            cout<<"Value pushed in the stack: "<<endl;
        }
        else{
            cout<<"The stack is full: "<<endl;
        }
    }

    int pop(){
        if(top>=0){
        int temp = arr[top];
        arr[top]  = 0;
        top--;
        cout<<"Element removed are "<<temp<<endl;
        return temp;
        }
    }

    void peek(){
        if(top>=0){
        cout<<"The element at the position "<<top+1 << " is " << arr[top]<<endl;
        }
    }

    bool isEmpty(){
        if(top <0){
        cout<<"stack is empty"<<endl;
        }
        else{
            cout<<"Stack has elements inside it: "<<endl;
        }
    }
    void display(){
        for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
        
        }
        cout<<endl;
    }
};


int main(){
    stack s(5);
    s.isEmpty();
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();
    s.pop();
    s.pop();
    s.push(4);
    s.push(5);
    s.display();
    s.peek();



    return 0;
}
