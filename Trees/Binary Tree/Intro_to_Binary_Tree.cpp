#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        left =  NULL;
        right = NULL;

    }
};

node* BuildTree(node* root){
    cout<<"Enter data: "<<endl;
    int data;
    cin>> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of: "<< data <<endl;
    root->left = BuildTree(root->left);
    cout<<"Enter data for inserting in right: "<< data<<endl;
    root->right = BuildTree(root->right);
    
    return root;

}
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

void buildLevelOrderTraversalTree(node* &root){
    queue<node*> q;
    int data;
    cout<<"Enter data for root: ";
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new node(leftData); 
            q.push(temp->left);
        }

        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
    
}


int main(){

    node* root = NULL;
    //creating tree
    root = BuildTree(root);

    //creating tree from level order traversal
    // buildLevelOrderTraversalTree(root);




    // level order traversal

    //7 6 2 -1 -1 1 -1 -1 5 3 -1 -1 -1
    // levelOrderTraversal(root);

    // inOrder(root);
    // preOrder(root);
    // postOrder(root);
    return 0;
}