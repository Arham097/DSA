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

int minVal(node *root)
    {
        node* temp = root;
        while(temp->left!=NULL){
            temp = temp->left;
        }
        return temp->data;
}
node* deleteInBST(node* root, int val){
    // base case
    if(root== NULL){
        return root;
    }
    // node found
    if(root->data == val){
        // 0 child
        if(root->left ==NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // 1 child

        //left child
        if(root->left!=NULL && root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        // right child
        if(root->left==NULL && root->right!= NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if(root->left != NULL && root->right!=NULL){
            int mini = minVal(root->right);
            root->data =  mini;
            root->right = deleteInBST(root->right, mini);
            return root;
        }

    }
    else if(root->data>val){
        root->left = deleteInBST(root->left,val);
        return root;
    }
    else{
        root->right = deleteInBST(root->right,val);
        return root;
    }
    
}


int main(){
    node* root = NULL;

    cout<<"Enter data to create BST "<<endl;
    takeInput(root);

    levelOrderTraversal(root);

    // cout<<"Printing Inorder:"<<endl;
    // inOrder(root);
    // cout<<endl;
    // cout<<"Printing preorder:"<<endl;
    // preOrder(root);
    // cout<<endl;

    // cout<<"Printing postorder:"<<endl;
    // postOrder(root);

    cout<<endl;
    deleteInBST(root,7);
    levelOrderTraversal(root);
    return 0;
}