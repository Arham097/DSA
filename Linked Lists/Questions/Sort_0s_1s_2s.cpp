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
void insertAtHead(Node*& head,int data){

    if(head == NULL){
        Node* temp  = new Node(data);
        head = temp;
            }
    else{
        Node*temp = new Node(data);
        temp->next = head;
        head = temp;

    }
}

void print(Node*&head){
    Node* temp = head ;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
        cout<<endl;
}

Node* sort(Node* head){
    int countZero = 0,countOne = 0,countTwo = 0;

    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==0) countZero++;
        else if (temp->data==1) countOne++;
        else countTwo++;

        temp = temp->next;
    }

    temp = head;
    while(temp!=NULL){
        if(countZero!=0){
            temp->data = 0;
            countZero--;
        }
        else if(countOne!=0){
            temp->data = 1;
            countOne--;
        }
        else if(countTwo!=0){
            temp->data = 2;
            countTwo--;
        }
        temp = temp->next;
    }
    return head;
}


//Approach 2 when data replacement is not allowed/////

/*
void insertAtTail(Node*& tail, Node*  curr){
    tail->next = curr;
    tail = curr;
}

Node* sort(Node* head){
    if(head==NULL) return NULL;

    Node* ZeroHead = new Node(-1);
    Node* ZeroTail = ZeroHead;
    Node* OneHead = new Node(-1);
    Node* OneTail = OneHead;
    Node* TwoHead = new Node(-1);
    Node* TwoTail = TwoHead;


    Node* curr = head;

    //create separate lists for 0s 1s and 2s
    while(curr!=NULL){
        int value = curr->data;
        if(value==0){
            insertAtTail(ZeroTail,curr);
        }
        else if(value==1){
            insertAtTail(OneTail,curr);
        }
        else if(value==2){
            insertAtTail(TwoTail,curr);
        }
        curr = curr->next;
    }
    // merge 3 lists

    //if 1s is empty////////
    if(OneHead->next!=NULL){
        ZeroTail->next = OneHead->next;
    }
    //if 1s is not empty/////////
    else{
        ZeroTail->next = TwoHead->next;
    }

    OneTail->next = TwoHead->next;
    TwoTail->next = NULL;

    head = ZeroHead->next;

    delete ZeroHead;
    delete OneHead;
    delete TwoHead;
    
    return head;
}
*/
int main(){


    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,1);
    insertAtHead(head,0);
    insertAtHead(head,1);
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,2);
    insertAtHead(head,0);
    insertAtHead(head,2);
    insertAtHead(head,0);
    
    cout<<"Before Sorting"<<endl;
    print(head);

    head = sort(head);
    cout<<endl<<"After Sorting"<<endl;
    print(head);


  

 
    return 0;
}