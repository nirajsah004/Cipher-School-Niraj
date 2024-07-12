#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    
    node(int data) {
        this->data = data;
        this->next = nullptr; 
    }
};
    void insertNode(int value,node* &head){
        node* temp = new node(value);
        temp->next = head;
        head = temp;
    } 

    void printnode(node* &head){
        node* temp = head;

        if(temp == NULL){
            cout<<"Linked list is empty"<<endl;
        }
        while(temp != NULL){
            cout<<temp->data<<"-->";
            temp = temp->next;
        }
        
    }

    void insertatend(int value,node* &head){
        node* temp = new node(value);
        if (head == NULL) {
        head = temp;
        }
        else{
        node* end = head;
        while (end->next != NULL) {
            end = end->next;
        }
        end->next = temp;
    }
    }


int main() {
    node* head = NULL;

    node* n1 = new node(1);
    node* n2 = new node(2);
    node* n3 = new node(3);

    n1->next = n2;
    n2->next = n3;
    head = n1;
    printnode(head);
    cout<<endl;

    cout<<"After insertion of node: "<<endl;

    insertNode(0,head);
    printnode(head);
    cout<<endl;
    cout<<"After insertion at end:"<<endl;
    insertatend(4,head);
    printnode(head);
    return 0;
}
