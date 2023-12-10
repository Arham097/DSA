#include<iostream>
using namespace std;  
  
  struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
  
int findMax(Node *root)
    {
        Node* temp =  root;
        while(temp->right!=NULL){
            temp = temp->right;
        }
        return temp->data;
    }
int findMin(Node *root)
    {
        Node* temp = root;
        while(temp->left!=NULL){
            temp = temp->left;
        }
        return temp->data;
    }