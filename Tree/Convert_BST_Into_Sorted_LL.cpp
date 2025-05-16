#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* right;
        Node* left;

        Node(int data){
            this->data = data;
            this->right = NULL;
            this->left = NULL;
        }
};

Node* buildBST(){

    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);

    cout<<"Enter the left child of "<<data<<endl;
    root->left = buildBST();    

    cout<<"Enter the right child of "<<data<<endl;
    root->right = buildBST();
    return root;
}

void printBST(Node* root){

    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        for(int i = 0; i < size; i++){
            Node* temp = q.front();
            q.pop();

            cout<<temp->data<<" ";

            if(temp->left != NULL){
                q.push(temp->left);
            }

            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
        cout<<endl;

    }
}

void convertBSTToSortedDLL(Node* root, Node*& head){

    if(root == NULL){
        return;
    }

    convertBSTToSortedDLL(root->right, head);

    root->right = head;

    if(head != NULL){
        head->left = root;
    }

    head = root;

    convertBSTToSortedDLL(root->left, head);
}

int main(){

    Node* root = buildBST();

    printBST(root);

    Node* head = NULL;
    convertBSTToSortedDLL(root, head);

    cout<<"The sorted doubly linked list is : "<<endl;
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->right;
    }

    return 0;
}