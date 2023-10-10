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

//Approach 1///////
/*int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(head!=NULL){
        len++;
        head= head->next;
    }
    return len;
}

Node* middle(Node* head){
    int len = getLength(head);
    int mid = len/2;

    Node* temp = head;
    int cnt = 0;
    while(cnt<mid){
        temp = temp->next;
        cnt++;
    }   
    return temp;
}
*/
///////////////////////////////

//Approach 2///
// Node* middle(Node *head) {

//     if(head==NULL || head->next ==NULL){
//         return head;
//     }
//     if(head->next->next==NULL){
//         return head->next;
//     }
//     Node* slow = head;
//     Node* fast = head->next;
//     while(fast!=NULL){
//         fast = fast->next;
//         if(fast!=NULL){
//             fast =fast->next;
//         }
//         slow = slow->next;
//     }
//     return slow;
// }


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

    
    insertatHead(head,5);
    print(head);
    
    // insertatHead(head,1);
    // print(head);

    // head = middle(head);
    // print(head);

    return 0;
}