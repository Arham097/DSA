#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory free for : "<<value<<endl;
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
void print(Node*& tail ){

    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    Node* temp = tail;

    do{
        cout<< tail->data<<" ";
        tail = tail->next;
    }
    while(tail != temp);
    cout<<endl;   
}

void deleteNode(Node*& tail, int element){
   
    //empty list
    if(tail==NULL){
        cout<<"List is already rmpty;"<<endl;
    }
    else{
        //non-empty list;

        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data !=element){
            prev=curr;
            curr= curr->next;
        }
        prev->next = curr->next;

        if(curr==prev){
            tail=NULL;
        }
        else if(tail ==curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

bool isCircular(Node*tail){
    if(tail==NULL) return true;

    Node* temp = tail->next;

    while(temp!=NULL && temp!=tail){
        temp = temp->next;
    }

    if(temp==NULL) return false;
    else return true;
}

int main(){

    Node* tail = NULL;

    insertAtNode(tail,5,3);
    print(tail);

    
    insertAtNode(tail,3,5);
    print(tail);

     
    insertAtNode(tail,5,7);
    print(tail);

    insertAtNode(tail,5,6);
    print(tail);
    
    // deleteNode(tail,3);
    // print(tail); 

    
    // insertAtNode(tail,3,4);
    // print(tail);

    if(isCircular(tail)) cout<<"It is circular list "<<endl;
    else cout<<"It is not circular list "<<endl;
    return 0;
}