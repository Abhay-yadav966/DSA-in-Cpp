#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve( vector<int> &arr, int& target, vector<vector<int>>& ans, vector<int>& output, int& sum, int index){

    // base case
    if( sum == target){
        ans.push_back(output);    
        return;
    }

    if( sum > target){
        return;
    }

    // 1 case
    for( int i = index; i < arr.size(); i++){
        sum = sum + arr[i];
        output.push_back(arr[i]);
        solve( arr, target, ans, output, sum, i);
        output.pop_back();
        sum = sum - arr[i];
    }
}

int main(){

    vector <int> arr = { 2,3,6,7};
    int target = 7;

    vector <vector <int>> ans;
    vector <int> output;

    int sum = 0;
    int index = 0;

    solve( arr, target, ans, output, sum, index);

    cout<<"The answer : ";
    for( int i = 0; i < ans.size(); i++){
        cout<<", [ ";
        for( int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<", ";
        }
        cout<<"], ";
    }

    return 0;
}