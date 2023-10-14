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

//By Floyd's cycle detection algorithm////
Node* floyd(Node* head){
    if (head == NULL) return NULL;

    Node* fast = head;
    Node* slow = head;

    while(slow!= NULL && fast!= NULL){
        fast = fast->next;
        if(fast!= NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if(slow == fast) return slow;
    }
    return NULL;
}

Node* getStart(Node* head){
    if(head==NULL) return NULL;
    
    Node* intersection = floyd(head);
    if(intersection ==NULL) return NULL;
    Node* slow = head;

    while(slow!=intersection){
        slow= slow->next;
        intersection = intersection->next;
    }
    cout<<"loop starts at: "<<slow->data<<endl;
    return slow;
}
Node *removeLoop(Node *head)
{
    if(head==NULL) return NULL;
    // Write your code here.
    Node* start = getStart(head);
    if(start==NULL) return head;
    Node* temp = start;
    while(temp->next!=start){
        temp= temp->next;
    }
    temp->next = NULL;
    return head;
}
int main(){

    Node* node1 = new Node(10);

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,10);

    insertAtTail(head,tail,20);
    
    insertAtTail(head,tail,30);
    
    insertAtTail(head,tail,40);
    
    insertAtTail(head,tail,50);
    
    insertAtTail(head,tail,60);
    
    insertAtTail(head,tail,70);
    print(head);

    tail->next = head->next;

    if(floyd(head)!=NULL){
        cout<<"Loop is detected"<<endl;
    }
    else{
        cout<<"Loop is detected"<<endl;
    }



    removeLoop(head);
    print(head);
    
    

    return 0;
}