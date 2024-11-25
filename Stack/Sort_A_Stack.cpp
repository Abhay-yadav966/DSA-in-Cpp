#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

void print(stack <int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

void insertSort(stack <int> &st, int target){
    
    if(st.empty()){
        st.push(target);
        return;
    }

    if(target >= st.top()){
        st.push(target);
        return;
    }

    int data = st.top();
    st.pop();

    insertSort(st, target);
    st.push(data);
    return;
}

void sortStack(stack <int> &st){
    if(st.empty()){
        return;
    }

    int data = st.top();
    st.pop();

    sortStack(st);
    insertSort(st, data);
    return;
}

int main(){
    stack <int> st;
    st.push(60);
    st.push(43);
    st.push(56);
    st.push(22);
    st.push(90);
    st.push(67);
    st.push(89);
    st.push(34);
    st.push(56);
    cout<<"Before Sorting : ";
    print(st);
    sortStack(st);
    cout<<endl<<"After Sorting : ";
    print(st);
    return 0;
}