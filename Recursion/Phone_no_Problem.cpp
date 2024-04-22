#include<iostream>
#include<vector>
using namespace std;

void solve( string& input, vector <string>& mapping, int& i, vector <string>& ans, string& output ){

    if( i >= input.length() ){
        ans.push_back(output);
        return;
    }

    string str = mapping[input[i] - '0'];

    for( int index = 0; index < str.length(); index++ ){
        output.push_back(str[index]);
        i = i + 1;
        solve( input, mapping, i, ans, output);
        i = i - 1;
        output.pop_back();
    }

}

int main(){

    string input = "23";
    vector <string> mapping(10);
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "pqrs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";

    int i = 0;
    vector <string> ans;
    string output = "";

    solve( input, mapping, i, ans, output);

    for(auto i:ans ){
        cout<<i<<" ";
    }

    return 0;
}