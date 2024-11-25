#include<iostream>
#include<stack>
using namespace std;

bool helper(string s){
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '('){
            st.push(ch);
        }else{
            if(ch == ')'){
                bool temp = true;
                while(st.top() != '('){
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '/' || top == '*'){
                        temp = false;
                    }
                    if(temp){
                        return true;
                    }
                    st.pop();
                }
            }
        }
    }
    return false;
}

int main(){
    string s = "((a+b))";
    bool ans = helper(s);

    if(ans){
        cout<<"Redundant : Unsuccessfully"<<endl;
    }else{
        cout<<"Not Redundant : Successfully"<<endl;
    }

    return 0;
}