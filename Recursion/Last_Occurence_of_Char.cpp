#include<iostream>
using namespace std;

void lastOccurence( string& str, char& ch, int& i, int& ans){
    if( i >= str.length() ){
        return;
    }

    if( ch == str[i] ){
        if( ans < i ){
            ans = i;
        }
    }

    i = i + 1;
    lastOccurence( str, ch, i, ans);

}

int main(){

    string str = "abcddefg";
    char ch = 'd';
    int i = 0;
    int ans = -1;

    lastOccurence(str, ch, i, ans);

    cout<<"Character present : "<<ans<<endl;

    return 0;
}