#include<iostream>
#include<vector>
using namespace std;

void solve( int& n, int& open, int& close, string& output, vector <string>& ans){

    // base case
    if( open == n && close == n){
        ans.push_back(output);
        return;
    }

    // include open bracket
    if( open < n){
        output.push_back('(');
        open = open + 1;
        solve( n, open, close, output, ans);
        open = open - 1;
        output.pop_back();
    }

    // include close bracket
    if( open > close){
        output.push_back(')');
        close = close + 1;
        solve( n, open, close, output, ans);
        close = close - 1;
        output.pop_back();
    }

}

int main(){

    int n;
    cout<<"Enter the number of paranthesis : "<<endl;
    cin>>n;

    int open = 0;
    int close = 0;

    string output = "";
    vector<string> ans;

    solve( n, open, close, output, ans);

    for(auto i:ans){
        cout<<i<<endl;
    }

    return 0;   
}