#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

    void printNode(node* &head){
        if(head == NULL){
            cout<<"Linked list is empty: "<<endl;
        }

        node* temp;
        temp = head;
        while(temp!= NULL){
            cout<<temp->data<<"-->";
            temp = temp->next;
        }


    }

int main(){
    node* head = NULL; 
    printNode(head);
    node* n1 = new node(3);
    head = n1;
    printNode(head);            // prints the data stored in the head value whch is node 1 has data 3
    cout<<endl;
    node* n2 = new node(4);
    n1->next = n2;
    printNode(head);            // prints the value of n1 and n2
    cout<<endl;
    node* n3 = new node(5);
    n2->next = n3;
    printNode(head);
    cout<<endl;
    node* n4 = new node(6);
    n3->next = n4;
    printNode(head);



    return 0;
}
