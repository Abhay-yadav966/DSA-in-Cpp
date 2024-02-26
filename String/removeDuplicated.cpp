#include<iostream>
using namespace std;

int main(){

    string str = "abbaca";
    // output "ca"

    string ans = "";

    int i = 0;
    while( i < str.length() ){
        // checking for the first element
        if( ans.length() > 0 ){
            if( ans[ans.length() - 1] == str[i] ){
                ans.pop_back();
            }
            else{
                ans.push_back(str[i]);
            }
        }
        else{
            ans.push_back(str[i]);
        }
        i++;
    }

    cout<<ans<<endl;

    return 0;
}