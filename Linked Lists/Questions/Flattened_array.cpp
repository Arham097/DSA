// This question is direct solution which has solve on Coding Ninjas Compiler You can solve this on Coding Ninjas



// Node* merge(Node*& left,Node*& right){
//     if(left==NULL) return right;
//     if(right==NULL) return left;

//     Node* ans = new Node(-1);
//     Node* temp = ans;

//     while(left!=NULL && right!=NULL){
//         if(left->data<right->data){
//             temp->child = left;
//             temp = left;
//             left = left->child;
//         }
//         else{
//             temp->child = right;
//             temp = right;
//             right = right->child;
//         }
//     }
//     while(left!=NULL){
//         temp->child = left;
//         temp = left;
//         left = left->child;
//     }
//     while(right!=NULL){
//         temp->child = right;
//             temp = right;
//             right = right->child;
//     }
//     return ans->child;
// }
// Node* flattenLinkedList(Node* head) 
// {
// 	if(head==NULL || head->next==NULL) return head;
// 	// Write your code here
// 	Node* down = head;
// 	Node* right = flattenLinkedList(head->next);
// 	down->next = NULL;

// 	Node* ans  = merge(down,right);

// 	return ans;
// }
