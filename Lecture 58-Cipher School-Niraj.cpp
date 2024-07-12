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

    void insertatend(int value,node* &he){
        node* temp = new node(value);
        if (he == NULL) {
        he = temp;
        }
        else{
        node* end = he;
        while (end->next != NULL) {
            end = end->next;
        }
        end->next = temp;
        }
    }

    void insertatmiddle(node* &he,int location,int data){
        node* temp = new node(data);
        node* var = he;

        while(var!= NULL && var->data != location){
            var = var->next;
        }
        
        temp->next = var->next;
        var->next = temp;
    }


int main() {
    node* head = NULL;

    node* n1 = new node(1);
    node* n2 = new node(2);
    node* n3 = new node(4);
    node* n4 = new node(5);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    head = n1;
    cout<<"Linked list at the start"<<endl;
    printnode(head);
    cout<<endl;

    cout<<"After insertion at the start: "<<endl;
    insertNode(0,head);
    printnode(head);
    cout<<endl;
    cout<<"After insertion at end of list:"<<endl;
    insertatend(6,head);
    printnode(head);
    cout<<endl;
    cout<<"Inserting node in the middle of list: "<<endl;
    insertatmiddle(head,2,3);
    printnode(head);


    return 0;
}
