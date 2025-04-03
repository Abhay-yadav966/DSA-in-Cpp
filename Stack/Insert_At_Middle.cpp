#include<iostream>
#include<stack>
using namespace std;

void helper(stack <int>& st, int mid, int& element){

    if(mid == 0){
        st.push(element);
        return;
    }

    int num = st.top();
    st.pop();
    helper(st, mid - 1, element);
    st.push(num);
}

void printStack(stack <int>& st){
    if(st.size() == 0){
        return;
    }

    int num = st.top();
    cout<<num<<" ";
    st.pop();
    printStack(st);
    st.push(num);
}

int main(){

    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // st.push(60);

    int mid = st.size()/2 + st.size()%2;
    cout<<"The value of mid : "<<mid<<endl;
    int element = 100;

    printStack(st);
    
    helper(st, mid, element);
    cout<<endl;
    
    printStack(st);
    // cout<<"Abhay"<<endl;

    return 0;
}