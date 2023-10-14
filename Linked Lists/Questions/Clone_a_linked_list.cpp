
// Clone a linked list with next and random pointer (From GEEKS AND GEEKS) 
// YOU can solve this problem on Geeks for Geeks because input is not here.
// This code is provided here after solving on GEEKS FOR GEEKS' Compiler.



// Approach 1 with Time Complexity O(n) and Space Complexity O(n)

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* arb ;

    Node(int x){
        data = x;
        next = NULL;
        arb = NULL;
    }
};

class Solution
{
    private:
        void insertAtTail(Node*& head, Node*& tail, int d){
            Node* temp = new Node(d);
            if(head==NULL){
                head = temp;
                tail = temp;
                return;
            }
            else{
                tail->next= temp;
                tail = temp;
            }
        }
    public:
    Node *copyList(Node *head)
    {//Step 1: Create a clone linked list 
        Node* CloneHead = NULL;
        Node* CloneTail = NULL;
        
        Node* temp = head;
        
        while(temp!=NULL){
            insertAtTail(CloneHead,CloneTail,temp->data);
            temp = temp->next;
        }
        
        // Step 2: Create a map
        unordered_map<Node*,Node*> oldtoNew;
        Node* originalNode = head;
        Node* CloneNode = CloneHead;
        while(originalNode!=NULL){
            oldtoNew[originalNode] = CloneNode;
            originalNode = originalNode->next;
            CloneNode = CloneNode->next;
        }
        //Step 3: Copying random pointers
        originalNode = head;
        CloneNode = CloneHead;
        
        while(originalNode!= NULL){
            CloneNode->arb = oldtoNew[originalNode->arb];
            originalNode = originalNode->next;
            CloneNode = CloneNode->next;
        }
        
        return CloneHead;
    }

};


// Approach 2 with Time Complexity O(n) and Space Complexity O(1)

class Solution
{
    private:
        void insertAtTail(Node*& head, Node*& tail, int d){
            Node* temp = new Node(d);
            if(head==NULL){
                head = temp;
                tail = temp;
                return;
            }
            else{
                tail->next= temp;
                tail = temp;
            }
        }
    public:
    Node *copyList(Node *head)
    {
        //Step 1: Create a clone linked list 
        Node* CloneHead = NULL;
        Node* CloneTail = NULL;
        
        Node* temp = head;
        
        while(temp!=NULL){
            insertAtTail(CloneHead,CloneTail,temp->data);
            temp = temp->next;
        }
        
        // Step 2: Clone Nodes add between original list
        Node* OriginalNode = head;
        Node* CloneNode = CloneHead;
        
        while(OriginalNode!=NULL && CloneNode!=NULL){
            Node* next = OriginalNode->next;
            OriginalNode->next = CloneNode;
            OriginalNode = next;
            
            next = CloneNode->next;
            CloneNode->next = OriginalNode;
            CloneNode = next;
            
            
        }
        
        //Step 3: Copying random pointers
        temp = head;
        while(temp!=NULL){
            if(temp->next!=NULL){
                temp->next->arb = temp->arb ? temp->arb->next :temp->arb;
            }
                temp = temp->next->next;
        }
        //Step 4: Revert Changes in Step 2
        OriginalNode = head;
        CloneNode = CloneHead;
        while(OriginalNode!=NULL && CloneNode!=NULL){
            OriginalNode->next = CloneNode->next;
            OriginalNode = OriginalNode->next;
            
            if(OriginalNode!=NULL){
                CloneNode->next = OriginalNode->next;
                
            }
            CloneNode = CloneNode->next;
        }
        
        //Step 5 return ans;
        return CloneHead;
 
    }

};