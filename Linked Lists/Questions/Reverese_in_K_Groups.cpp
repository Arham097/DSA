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

int len(Node*head)

{

    if(head==NULL)

    {

        return 0;

    }

    return 1+len(head->next);

}
Node* reversed(Node* head, int k) {
    // Write your code here.
    if(k==0||k==1||head==NULL) return head;

    Node* prev = NULL;
    Node* curr =  head;
    Node* forward = NULL;

    int count = 0;
    int l=len(head);
    if(l<k)
    {
        return head;
    }

    while(curr!=NULL && count<k){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    if(forward!=NULL){
        head->next = reversed(forward,k);
    }
    return prev;
}

void insertAthead(Node*& head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node*& head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    Node* node1 = new Node(10);
    Node* head= node1;
    // print(head);
    insertAthead(head, 20);
    insertAthead(head, 30);
    insertAthead(head, 40);
    insertAthead(head, 50);
    insertAthead(head, 60);

    head = reversed(head,2);
    print(head);


    return 0;
}