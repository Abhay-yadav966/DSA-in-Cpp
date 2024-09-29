#include<iostream>
#include<vector>
using namespace std;

void solve( string& str, vector <string>& ans, int& i){

    // base case
    if( i >= str.size()){
        ans.push_back(str);
        return;
    }

    for( int j = i; j < str.size(); j++){
        swap(str[i], str[j]);
        i = i + 1;
        solve( str, ans, i);
        i = i - 1;
        swap(str[i], str[j]);
    }

}

int main(){

    string str = "ab";
    vector <string> ans;

    int i = 0;
    solve( str, ans, i);

    for( auto i:ans){
        cout<<i<<endl;
    }

    return 0;
}