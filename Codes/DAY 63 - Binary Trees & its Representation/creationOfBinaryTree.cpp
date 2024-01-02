#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node *left;
        node *right;


    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    } 
};

node* buildTree(node* root){
    int data;    
    cout << "Enter the data for node: " << endl;
    cin >> data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for inserting in left :" << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter data for inserting in right :" << endl;
    root -> right = buildTree(root -> right);

    return root;
}


void levelOrderTraversal(node *root){
    queue <node*> q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        cout << temp -> data << " ";
        q.pop();

        
    }
}

void inOrder(node *root){
    // base case
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root -> data <<" ";
    inOrder(root->right);
}

void preOrder(node *root){
    // base case
    if(root == NULL){
        return;
    }
    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);
}

void postOrder(node *root){
    // base case
    if(root == NULL){
        return;
    }
    preOrder(root -> left);
    preOrder(root -> right);
    cout << root -> data << " ";
}
int main(){
    
    node* root = NULL;
    
    // function call to build tree
    root = buildTree(root);
    return 0;
}