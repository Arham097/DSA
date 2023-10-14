#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node*& head, Node*& tail, int data){

    if(head == NULL){
        Node* temp  = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node*temp = new Node(data);
        temp->next = head;
        head = temp;

    }
}

void insertAtTail(Node*& head,Node*& tail, int data){

     if(tail == NULL){
        Node* temp  = new Node(data);
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        tail->next = temp;
        tail = tail->next;  
    }
}
void print(Node*&tail){
    Node* temp = tail ;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
        cout<<endl;
}

Node* removed(Node *head)
{
    // Write your code here
    if(head==NULL) return NULL;

    Node* curr = head;

    while(curr!=NULL){
        if((curr->next!= NULL) && (curr->data == curr->next->data)){
            Node* next_next = curr->next->next;
            Node* Node_to_del = curr->next;
            delete(Node_to_del);
            curr->next = next_next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}
int main(){

    Node* node1 = new Node(10);

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,1);

    insertAtTail(head,tail,2);
    
    insertAtTail(head,tail,2);
    
    insertAtTail(head,tail,3);
    
    insertAtTail(head,tail,3);
    
    insertAtTail(head,tail,4);
       
    head = removed(head);
    print(head);
    

    return 0;
}