#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void insertatHead(Node*& head, int d){
    
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}
void print(Node*& head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
//iterative way////////////
// Node* reverse(Node* head){
//     if(head==NULL || head->next == NULL){
//         return head;
//     }
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forward = NULL;
//     while(curr!=NULL){
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward; 
//     }
//     return prev;
// }

//Recursive Way//////
void reverse(Node*& head, Node* curr, Node* prev){

    //base case
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* forward = curr->next;
    reverse(head,forward,curr);
    curr->next = prev;
}

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    reverse(head,curr,prev);
    return head;
}
int main(){

    Node* node1 = new Node(10);
    Node* head= node1;
    print(head);
    insertatHead(head,24);
    print(head);

    insertatHead(head,20);
    print(head);

    insertatHead(head,14);
    print(head);

    head = reverse(head);
    print(head);

    return 0;
}