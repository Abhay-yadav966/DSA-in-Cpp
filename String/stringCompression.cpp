#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<char> chars = {'a','a','b','b','c','c','c'};

    for(int i = 0; i < chars.size(); i++){
        cout<<chars[i]<<" ";
    }

    int count = 1;
    vector<char> ans;

    if( chars.size() == 1 ){
        return count;
    }

    for(int i = 0; i < chars.size(); i++){
        if(chars[i] == chars[i+1]){
            count++;
            cout<<"abhay ";
        }
        else{
            ans.push_back(chars[i]);
            cout<<count<<" ";
            ans.push_back(count+'0');
            count = 1;
        }
    }

    cout<<endl;

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}