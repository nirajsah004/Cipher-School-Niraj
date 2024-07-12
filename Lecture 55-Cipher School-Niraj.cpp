#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data_type){
        this->data = data_type;
        this->next = NULL;
    }

};

void display(node* &node){
    cout<<"Value "<<node->data;
    cout<<" Address "<<node->next<<endl;
}

int main(){
    node* node1 = new node(3);
    node* node2 = new node(4);
    node* node3 = new node(5);
    // display(node1);
    // display(node2);
    // display(node3);

    node1->next = node2;
    node2->next = node3;

    display(node1);
    display(node2);
    display(node3);

    return 0;
}
