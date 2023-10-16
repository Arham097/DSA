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
};
void insertAtTail(Node*& tail, int d){
    Node* temp = new Node(d);
    if(tail==NULL){
        tail = temp;
        temp->next = temp;
    }
    else{
        temp->next = tail->next;
        tail->next = temp;
        
    }
}
void print (Node* tail){
    if(tail==NULL){
        cout<<"List is empty "<<endl;
        return;
    }
    Node* temp = tail;

    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    while(temp!=tail);
    cout<<endl;
}

void deleteNode(Node*& tail, int element){
    if(tail==NULL){
        cout<<"List is already empty";
    }
    else{
        Node* prev = tail;
        Node* curr = tail->next;

        while(curr->data!=element){
            curr = curr->next;
        }
        prev->next = curr->next;
        if(curr==prev){
            tail=NULL;
        }
        else if( curr == tail){
            tail= prev;
        }
        curr->next = NULL;
        delete curr;
    }


}
int main(){
    // Node* node1 = new Node(10);
   
    Node* tail = NULL;
    insertAtTail(tail,12);
    insertAtTail(tail,15);
    insertAtTail(tail,17);

    deleteNode(tail,17);
    print(tail);

    // cout<<endl;
    // cout<<tail->data;


    return 0;
}