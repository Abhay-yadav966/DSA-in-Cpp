#include<iostream>
using namespace std;

class Tree{
    int data;
    Tree* left;
    Tree* right;

    public:
    Tree(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void buildTree(){
    int data;
    cout<<"Enter the data: ";
    cin>>data;
    if(data == -1){
        return;
    }

    Tree* root = new Tree(data);

    cout<<"Enter the left data: ";
    root->left = buildTree();

    cout<<"Enter the right data: ";
    root->right = buildTree();
}

int main(){
    buildTree();
    return 0;
}