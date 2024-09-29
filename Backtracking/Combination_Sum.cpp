#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve( vector<int> arr, int& target, vector<vector<int>>& ans, vector<int>& output, int& sum, int index){

    // base case
    if( sum == target){
        ans.push_back(output);    
        return;
    }

    if( sum > target || index >= arr.size() ){
        return;
    }

    // 1 case
    // include
    sum = sum + arr[index];
    output.push_back(arr[index]);
    solve(arr, target, ans, output, sum, index);
    output.pop_back();
    sum = sum - arr[index];

    // exclude
    solve( arr, target, ans, output, sum, index+1);
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