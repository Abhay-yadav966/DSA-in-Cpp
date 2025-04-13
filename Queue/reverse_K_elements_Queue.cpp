#include<iostream>
#include<queue>
using namespace std;

void helper(queue<int>& q, int k){
    if(k == 0){
        return;
    }
    
    int data = q.front();
    q.pop();
    helper(q, k-1);
    
    q.push(data);
    
}

int main(){

    queue<int> q;
    int k = 3;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);


    // add code here.
    helper(q, k);
    
    for(int i = 0; i < (q.size()-k); i++){
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}