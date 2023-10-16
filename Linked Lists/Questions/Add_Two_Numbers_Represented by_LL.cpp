// This question is direct solution which has solve on Geeks for Geeks Compiler You can solve this on Geeks for Geeks


// class Solution
// {
//     private:
//        Node* reverse(Node* head){
//         Node* prev = NULL;
//         Node* curr = head;
//         Node* forward = NULL;
//         while( curr!=NULL){
//             forward = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = forward;
//         }
//         return prev;
//     }
    
    
//     void insertAtTail(struct Node*& head, struct Node*& tail, int val){
        
//         Node* temp = new Node(val);
//         if(head==NULL){
//             head = temp;
//             tail = temp;
//             return;
//         }
//         else{
//             tail->next = temp;
//             tail =temp;
//         }
        
//     }
//     struct Node* add(struct Node* first, struct Node* second){
//         int carry = 0;
//         Node* ansHead = NULL;
//         Node* ansTail = NULL;

//         //Approach 2 for while loop
        
//         while(first!=NULL || second!= NULL || carry!=0){
//             int val1 =0;
//             if(first!=NULL){
//                 val1 = first->data;
//             }
//             int val2 =0;
//             if(second!=NULL){
//                 val2 = second->data;
//             }
            
//             int sum = carry+val1+val2;
//             int digit = sum%10;
//             insertAtTail(ansHead,ansTail,digit);
//             carry = sum/10;
            
//             if(first!=NULL) 
//                 first = first->next;
//             if(second!= NULL) 
//                 second = second->next;
//         }

//          //Approach 1 for while loop
        
//        /* while(first!=NULL && second!=NULL){
//             int sum = carry+first->data+second->data;
//             int digit = sum%10;
//             insertAtTail(ansHead,ansTail,digit);
//             carry = sum/10;
            
//             first = first->next;
//             second = second->next;
//         }
//         while(first!=NULL){
//             int sum = carry+first->data;
//             int digit = sum%10;
//             insertAtTail(ansHead,ansTail,digit);
//             carry = sum/10;
            
//             first = first->next;
//         }
//         while(second!=NULL){
//             int sum = carry+second->data;
//             int digit = sum%10;
//             insertAtTail(ansHead,ansTail,digit);
//             carry = sum/10;
            
//             second = second->next;
//         }
//         while(carry!=0){
//             int sum = carry;
//             int digit = sum%10;
//             insertAtTail(ansHead,ansTail,digit);
//             carry = sum/10;
//         }
//         */
//         return ansHead;
//     }
    
//     public:
//     //Function to add two numbers represented by linked list.
//     struct Node* addTwoLists(struct Node* first, struct Node* second)
//     {
//         // code here
        
//         //Reverse both lists
//         first  = reverse(first);
//         second = reverse(second);
        
//         //Add first and second lists
//         Node* ans = add(first,second);
        
//         //reverse answer
//         ans = reverse(ans);
        
//         return ans;
//     }
// };
