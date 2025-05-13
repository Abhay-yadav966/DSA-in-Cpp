#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value){
        val = value;
        left = NULL;
        right = NULL;
    }
};

TreeNode* helper(vector<int> arr, int start, int end){
    if(start > end){
        return NULL;
    }

    int mid = (start + end)/2;

    TreeNode* root = new TreeNode(arr[mid]);

    root->left = helper(arr, start, mid - 1);
    root->right = helper(arr, mid+1, end);

    return root;

}

void traverse(TreeNode* root){
    if(root == NULL){
        return;
    }

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        for(int i = 0; i < size; i++){
            TreeNode* temp = q.front();
            q.pop();

            cout<<temp->val<<" ";

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

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

    int start = 0;
    int end = arr.size() - 1;

    TreeNode* root = helper(arr, start, end);

    traverse(root);
    
    return 0;
}