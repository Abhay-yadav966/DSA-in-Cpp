#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class MinStack {
    public:
    vector <int> minvalue;
    vector <int> arr;
    int mini = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        arr.push_back(val);
        if(val < mini){
            mini = val;
            cout<<"value: "<<val<<endl;
            minvalue.push_back(val);
        }
    }
    
    void pop() {
        cout<<"reached "<<endl;
        int m = arr.size() - 1;
        int n = minvalue.size() - 1;
        cout<<"the last element of arr : "<<arr[m]<<endl;
        cout<<"the last element of minvalue : "<<minvalue[n]<<endl;
        if( arr[m] == minvalue[n] ){
            cout<<"inside"<<endl;
            minvalue.pop_back();
        }
        arr.pop_back();
    }
    
    int top() {
        return arr[arr.size() - 1];
    }
    
    int getMin() {
        return minvalue[minvalue.size() - 1];
    }

    bool empty(){
        if(arr.size() == 0){
            return true;
        }
        return false;
    }

    void printStack(){
        for(int i = 0; i < arr.size(); i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void printMin(){
        for(int i = 0; i < minvalue.size(); i++){
            cout<<minvalue[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    MinStack* m = new MinStack();
    m->push(0);
    m->push(1);
    m->push(0);
    m->printStack();
    m->printMin();
    cout<<"The minimum element : "<<m->getMin()<<endl;
    m->pop();
    m->printStack();
    m->printMin();
    cout<<"The top element : "<<m->top()<<endl;
    cout<<"The element once again : "<<m->getMin()<<endl;
    m->printStack();
    return 0;
}