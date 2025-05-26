// in this question we know that the given binary tree is Complete Binary Tree.

#include<iostream>
#include<limits.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);

    cout<<"Enter the data for the left node "<<data<<" "<<endl;
    root->left = buildTree();

    cout<<"Enter the data for the right  node "<< data<< " "<< endl;
    root->right = buildTree();

    return root;
}

Node* checkTreeIsHeap(Node* root, bool& ans){
    if(root == NULL){
        return NULL;
    }

    Node* left = checkTreeIsHeap(root->left, ans);
    Node* right = checkTreeIsHeap(root->right, ans);

    if(left != NULL && right != NULL && (left->data > root->data || right->data > root->data )){
        ans = false;
    }else if(left != NULL && right == NULL && left->data > root->data){
        ans = false;
    }

    return root;
}

int main(){
    Node* root = buildTree();

    bool ans = true;

    checkTreeIsHeap(root, ans);

    if(ans){
        cout<<"Yes, Tree is Heap"<<endl;
    }else{
        cout<<"No, Tree is not Heap"<<endl;
    }

    return 0;
}