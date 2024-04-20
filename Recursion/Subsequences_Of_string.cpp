#include<iostream>
#include<vector>
using namespace std;

void subSequenceOfString( string in, string op, int i, int n, vector<string> &ans){

    // base case
    if( i >= n ){
        ans.push_back(op);
        return;
    }

    // include
    op.push_back(in[i]);
    subSequenceOfString( in, op, i+1, n, ans);
    op.pop_back();


    // exclude
    subSequenceOfString( in, op, i+1, n, ans);

}

int main(){

    string in = "abc";
    string op = "";
    vector<string> ans;

    int i = 0;
    int len = in.length();

    subSequenceOfString( in, op, i, len, ans);

    cout<<"Printing All subsquences ->"<<endl;

    for( auto i:ans){
        cout<<i<<" ";
    }

    cout<<endl<<"The total length -> "<<ans.size()<<endl;

    return 0;
}