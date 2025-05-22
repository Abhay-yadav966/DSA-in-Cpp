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

pair<bool, int> checkTreeIsHeap(Node* root, bool& ans){
    if(root == NULL){
        return make_pair(true, INT_MIN);
    }

    if(root->left == NULL && root->right == NULL){
        return make_pair(true, root->data);
    }

    pair<bool, int> left = checkTreeIsHeap(root->left, ans);
    pair<bool, int> right = checkTreeIsHeap(root->right, ans);

    if(left.first == true && right.first == true && (left.second > root->data || right.second > root->data )){
        ans = false;
        return make_pair(false, root->data);
    }

    return make_pair(true, root->data);
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