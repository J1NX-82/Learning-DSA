#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right= NULL;
    }

};
// ! insertion in BST
Node* insertIntoBST(Node* root, int d){
    // base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    
    if(d > root -> data){
        // right part mei insert karna hai
        root -> right = insertIntoBST(root -> right, d);
    }
    else{
        // left part mei insert karna hai
        root -> left = insertIntoBST(root -> left, d);
    }
    return root;
}
// ! taking input in BST
void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}
// ! traversal technique
void inOrder(Node *root){
    // base case
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root -> data <<" ";
    inOrder(root->right);
}
// ! Searching in BST
bool searchInBST(Node* root, int x){
    // base case
    if(root == NULL){
        return false;
    }
    if(root -> data == x){
        return true;
    }
    if(root -> data > x){
        return searchInBST(root -> left, x);
    }
    else{
        return searchInBST(root -> right, x);
    }
}

// ! Min element in BST
Node* minVal(Node* root){
    Node* temp = root;

    while(temp -> left != NULL){
        temp = temp -> left;
    }
    return temp;
}

// ! Max element in BST
Node* maxVal(Node* root){
    Node* temp = root;

    while(temp -> right != NULL){
        temp = temp -> right;
    }
    return temp;
}

// ! Deleting of node in BST
Node* deleteFromBST(Node* root, int val){
    // base case
    if(root == NULL){
        return root;
    }
    if(root -> data == val){
        // 0 child
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        // 1 child
            // left child
                if(root -> left != NULL && root -> right == NULL){
                    Node* temp = root -> left;
                    delete root;
                    return temp; 
                }
            // right child
                if(root -> left == NULL && root -> right != NULL){
                    Node* temp = root -> right;
                    delete root;
                    return temp; 
                }
        // 2 child
        if(root -> left != NULL && root -> right != NULL){
            int mini = minVal(root -> right) -> data;
            root -> data = mini;
            root -> right = deleteFromBST(root -> right, mini);
            return root;
        }    
    }
    else if(root -> data > val){
        root -> left = deleteFromBST(root -> left, val);
        return root;
    }
    else{
        root -> right = deleteFromBST(root -> right, val);
        return root;
    }
}
int main(){
    Node* root = NULL;

    cout << "Enter data to create BST" << endl;
    takeInput(root);
    
    cout << "Printing the BST" << endl;
    inOrder(root);

    cout << "Searching for element in BST" << endl;
    if (searchInBST(root, 7)) {
        cout << "Element found in BST." << endl;
    } else {
        cout << "Element not found in BST." << endl;
    }

    cout << "Min value of the BST is " << minVal(root) -> data <<endl;
    
    cout << "Maxvalue of the BST is " << maxVal(root) -> data <<endl;
    return 0;
}