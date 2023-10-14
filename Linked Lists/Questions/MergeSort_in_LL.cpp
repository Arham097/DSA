#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }


};

void insertAtTail(node*& head,node*& tail, int data){

     if(tail == NULL){
        node* temp  = new node(data);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(data);
        tail->next = temp;
        tail = tail->next;  

    }

}


void print(node*&tail){
    node* temp = tail ;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
        cout<<endl;
}
node* merge(node*& left,node*& right){
    if(left==NULL) return right;
    if(right==NULL) return left;

    node* ans = new node(-1);
    node* temp = ans;

    while(left!=NULL && right!=NULL){
        if(left->data<right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while(left!=NULL){
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while(right!=NULL){
        temp->next = right;
            temp = right;
            right = right->next;
    }
    return ans->next;
}

node* getMid(node* head){
    node* slow = head;
    node* fast = head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow= slow->next;
    }
    return slow;
}

node* mergeSort(node *head) {
    // Write your code here.
    if(head==NULL || head->next==NULL) return head;

    node* mid = getMid(head);

    node* left = head;
    node* right = mid->next;
    mid->next= NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    node* ans = merge(left,right);

    return ans;
}

int main(){

    node* head = NULL;
    node* tail = NULL;

    insertAtTail(head,tail,15);
    insertAtTail(head,tail,5);
    insertAtTail(head,tail,25);
    insertAtTail(head,tail,8);
    insertAtTail(head,tail,85);
    insertAtTail(head,tail,10);

    cout<<"Before Merge Sort "<<endl;
    print(head);
    cout<<endl;
    head = mergeSort(head);
    cout<<"After Merge Sort"<<endl;
    print(head);



    return 0;
}