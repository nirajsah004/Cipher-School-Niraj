#include <iostream>
using namespace std;

class Queue{
    public:
    static const int capacity = 100;
    int queue[capacity];
    int front,rear,size;
    
 
    Queue(){
        this->front = 0;
        this->rear = -1;
        this->size =0;
    }

    void enqueue(int data){
        if(size == 100){
            cout<<"Queue is full: "<<endl;
            return;
        }
        cout<<"Value enqued is: "<<data<<endl;
        rear = (rear+1)%capacity;
        queue[rear] = data;
        size++;
    }
    void dequeue(){
        if(size == 0){
            cout<<"The queue is empty: "<<endl;
            return;
        }
        cout<<"The element dequed is: "<<queue[front]<<endl;
        front++; 
        size--;
    }
    void peek(){
        cout<<"The element at the front of the queue is: "<<queue[front]<<endl;
    }
    void sizeofqueue(){
        cout<<"The size of the queue is: "<<size<<endl;
    }
    
};



int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);

    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);

    q.peek();
    q.sizeofqueue();
    
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    return 0;
}
