 #include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
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

void insertAtHead(Node*& tail,Node*& head, int d){

    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;    

    }
}

void insertAtTail(Node*& tail,Node*& head, int d){
    
    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
    }
    else{
        Node* temp  = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
        
}

void insertAtAnywhere(Node*& tail, Node*& head, int pos,int d){
    if(pos==1){
        insertAtHead(tail,head,d);
        return;
    }
    int cnt = 1;
    Node* temp = head;
    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,head,d);
        return;
    }
    Node* node2 = new Node(d);
    node2->next = temp->next;
    temp->next->prev = node2; 
    temp->next = node2;
    node2->prev = temp;
}

void deleteNode(int position, Node*& head, Node* &tail){

    //deleting first or start node
    if(position==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = head->next;
        temp->next = NULL;
        //memory free for start node;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt=1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next; 
        if(prev->next == NULL){
            tail = prev;
        }
        curr->next = NULL;
 
        delete curr;

    } 
}
void print( Node*& head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

int length(Node*& head){
    Node* temp  = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
int main(){

    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    
    print(head);

    insertAtHead(tail,head,15);
    print(head);

    insertAtHead(tail,head,25);
    print(head);

    insertAtTail(tail,head,7);
    print(head);

    insertAtAnywhere(tail,head,2,55);
    print(head);

    deleteNode(4,head,tail);
    print(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    return 0;
}