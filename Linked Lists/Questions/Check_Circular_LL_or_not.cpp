#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
 
};
void insertAtNode(Node*& tail, int element,int d){

    //empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail  = temp;
        temp->next = temp;
    }
    else{
        //non empty list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        //element found
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

    }
}

bool isCircular(Node*tail){
    if(tail==NULL) return true;

    Node* temp = tail->next;

    while(temp!=NULL && temp!=tail){
        temp = temp->next;
    }

    if(temp==tail) return true;
    else return false;
}

int main(){

    Node* tail = NULL;

    insertAtNode(tail,5,3);
    
    insertAtNode(tail,3,5);
     
    insertAtNode(tail,5,7);

    insertAtNode(tail,5,6);

    if(isCircular(tail)) cout<<"It is circular list "<<endl;
    else cout<<"It is not circular list "<<endl;
    return 0;
}