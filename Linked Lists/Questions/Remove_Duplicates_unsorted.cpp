#include<iostream>
#include<unordered_map>
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

// Node *removed(Node *head)
// {
    
//     Node* curr = head;

//     while(curr!= NULL){
//         Node* prev = curr;
//         Node* temp = curr->next;

//         while(temp!=NULL){
//             if(curr->data == temp->data){
//                 prev->next = temp->next;
//                 delete temp;
//                 temp = prev->next;
//             }
//             else{
//                 prev = temp;
//                 temp = temp->next;
//             }
//         }
//         curr= curr->next;
//     }
//     return head;
// }

Node* removed(Node* head){
  unordered_map<int , bool> visited;
    Node* temp = head;
    Node* prev = NULL;

    while(temp != NULL)
    {
       if(visited[temp->data] != true)

        {
            visited[temp->data] = true;
            prev = temp;
            temp = temp->next;
        }
        else
        {
            prev->next = temp->next;
            temp = prev->next;
        }
    }
    return head;
}
int main(){

    Node* node1 = new Node(10);

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,4);

    insertAtTail(head,tail,2);
    
    insertAtTail(head,tail,3);
    
    insertAtTail(head,tail,2);
    
    insertAtTail(head,tail,3);
    
    insertAtTail(head,tail,1);
    
    insertAtTail(head,tail,1);

    insertAtTail(head,tail,1);
       
    head = removed(head);
    print(head);
    

    return 0;
}