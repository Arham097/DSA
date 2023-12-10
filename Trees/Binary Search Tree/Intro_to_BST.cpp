#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
        left = right = NULL;
    }
};

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl; // previuos level completely traverse
            if(!q.empty()){
                //queue still has some child nodes
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}


node* insertAtBST(node* root, int data){
    if(root==NULL){
        root = new node(data);
        return root;
    }
    if(data>root->data){
        root->right = insertAtBST(root->right,data);
    }
    else{
        root->left = insertAtBST(root->left,data);
    }
    return root;
}
void takeInput(node* &root){
    int data;
    cin >> data;

    while(data!=-1){
        root = insertAtBST(root,data);
        cin>>data;
    }
}
void inOrder(node* root){
    if(root == NULL){
        return ;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* root = NULL;

    cout<<"Enter data to create BST "<<endl;
    takeInput(root);

    levelOrderTraversal(root);

    cout<<"Printing Inorder:"<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"Printing preorder:"<<endl;
    preOrder(root);
    cout<<endl;

    cout<<"Printing postorder:"<<endl;
    postOrder(root);
    return 0;
}