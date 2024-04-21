#include<iostream>
#include<vector>
using namespace std;

void solve( vector <int> &arr, int& i, int& ans, int& temp ){

    // base case
    if( i >= arr.size() ){
        if( ans < temp ){
            ans = temp;
        }
        return;
    }

    // include 
    temp = temp + arr[i];
    i = i + 2;
    solve( arr, i, ans, temp);
    i = i - 2;
    temp = temp - arr[i];

    // exclude
    i = i + 1;
    solve( arr, i, ans, temp);
    i = i - 1;
}

int main(){

    vector <int> arr = { 1,2,3,1};
    int i = 0;
    int ans  = 0;
    int temp = 0;

    solve( arr, i, ans, temp);

    cout<<"The maximum no. -> "<<ans;

    return 0;
}