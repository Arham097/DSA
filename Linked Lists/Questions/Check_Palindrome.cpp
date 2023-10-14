#include<iostream>
#include<vector>
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
void insertAtHead(Node*& head, int data){

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

// Check Palindrome (Approach 1) Time COmplexity O(n) and Space Complexity O(n)

// bool Palindrome(vector<int> arr){
//         int n = arr.size();
//         int s = 0;
//         int e =n-1;
//         while(s<=e){
//             if(arr[s]!= arr[e]) return false;
//             s++;
//             e--;
//         }
//         return true;
//     }

// bool isPalindrome(Node *head)
//     {
//         //Your code here
//         vector<int> arr;
//         Node* temp = head;
//         while(temp!=NULL){
//             arr.push_back(temp->data);
//             temp = temp->next;
//         }
//         return Palindrome(arr);
//     }


   Node* getMid(Node* head){
            Node* slow = head;
            Node* fast = head->next;
            
            while(fast!=NULL && fast->next != NULL){
                fast = fast->next->next;
                slow = slow->next;
                
            }
            return slow;
        }
     Node* reversed(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        while( curr!=NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    bool isPalindrome(Node *head)
    {

        if(head->next==NULL) return true;
        
        //Get Mid
        Node* middle = getMid(head);
        
        // Reverse the list after mid
        Node* temp = middle->next;
        middle->next = reversed(temp);
        
        //Comparing two lists
        Node* head1 = head;
        Node* head2 = middle->next;
        
        while(head2!=NULL){
            if(head1->data!= head2->data){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
int main(){

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,1);

    insertAtHead(head,2);
    
    insertAtHead(head,2);
    
    insertAtHead(head,1);
  
    print(head);
    if(isPalindrome(head)){
        cout<<"It is a palindrome "<<endl;
    }
    else{
        cout<<"It is not a palindrome "<<endl;
    }
    

    return 0;
}