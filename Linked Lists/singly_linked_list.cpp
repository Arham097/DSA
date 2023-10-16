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
void insertAtHead(Node*& head, Node*& tail, int data){

    Node* temp  = new Node(data);
    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        temp->next = head;
        head = temp;

    }
}

void insertAtTail(Node*& head,Node*& tail, int data){

    Node* temp  = new Node(data);
     if(tail == NULL){
        tail = temp;
    }
    else{
      
        tail->next = temp;
        tail = tail->next;  

    }

}

void insertAtMiddle( Node*& head, Node*& tail,int position, int d){

    if(position==1){
        insertAtHead(head,tail,d);
        return;
    }

    Node*temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
       insertAtTail(head,tail,d);
       return;
    }
    Node* node2 = new Node(d);
    node2->next = temp->next;   
    temp->next = node2; 

 
}

void deleteNode(int position, Node*& head, Node* &tail){

    //deleting first or start node
    if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        //memory free for start node;
        delete temp;
    }
    else{
        //deleting any middle or last node

        Node* curr = head;
        Node* prev = NULL;

        int cnt =1;

        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        if(prev->next ==NULL){
            tail = prev;
        }



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
int main(){

    // Node* node1 = new Node(10);
    // cout<< node1 -> data <<endl;
    // cout<< node1->next <<endl;

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,12);
    print(head);

    insertAtTail(head,tail,15);
    print(head);

    insertAtMiddle(head,tail,2,13);
    print(head);

    deleteNode(2,head,tail);
    print(head);


    // insertAtHead(head,12);
    // print(head);

    // insertAtHead(head,15);
    // print(head);

    return 0;
}