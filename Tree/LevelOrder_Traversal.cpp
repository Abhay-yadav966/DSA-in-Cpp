#include<iostream>
#include<queue>
using namespace std;

class Tree{
    public:
    int data;
    Tree* left;
    Tree* right;

    Tree(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Tree* buildTree(){
    int data;
    cout<<"Enter the data: ";
    cin >> data;
    if(data == -1){
        return NULL;
    }

    Tree* newNode = new Tree(data);

    cout<< data <<"-> Enter the left data: "<< endl;
    newNode->left = buildTree();

    cout<< data <<"-> Enter the right data: "<<endl;
    newNode->right = buildTree();

    return newNode;
}

void levelOrderTraversal(Tree* root){
    queue<Tree*> q;
    q.push(root);

    while(!q.empty()){
        cout<<q.front()->data<<" ";

        if(q.front()->left != NULL ){
            q.push(q.front()->left);
        }

        if(q.front()->right != NULL ){
            q.push(q.front()->right);
        }

        q.pop();
    }
}

int main(){

    Tree* root = buildTree();
    levelOrderTraversal(root);
    return 0;
}