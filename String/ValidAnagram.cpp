#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string a = "rat";
    string b = "car";

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    bool ans;

    for( int i = 0; i < a.length(); i++ ){
        if(a[i] != b[i]){
            ans = false;
        }
        else{
            ans = true;
        }
    }

    cout<<"Ans :"<<ans<<endl;

    return 0;
}