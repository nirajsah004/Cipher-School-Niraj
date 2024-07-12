/* in this class we learned about queues and why they are use so they are first in first out the element that
 enters first will leave first 
*/
#include <iostream>
using namespace std;

class Queue{
    public:
    int queue[100];
    int capacity;
    int front;
    int rear;

    Queue(){
        front = 0;
        rear = -1;
        capacity = 100;
    }

};



int main(){
    return 0;
}
