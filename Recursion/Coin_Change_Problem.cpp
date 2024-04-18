#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

void coinChange( vector <int> &arr, int &ans, int &target, vector <int> &temp, int &mini){

    // base case
    if( ans == target ){
        if( mini > temp.size() ){
            mini = temp.size();
        }
        return;
    }

    if( ans > target ){
        return;
    }

    // include
    for( int i = 0; i < arr.size(); i++){
        ans = ans + arr[i];
        temp.push_back(arr[i]);
        coinChange(arr, ans, target, temp, mini);
        ans = ans - arr[i];
        temp.pop_back();
    }

    // exclude
    // coinChange( arr, ans, target, temp, mini, i+1);

}

int main(){

    vector <int> arr = { 1, 2, 5};
    int ans = 0;
    int target = 11;
    int mini = INT_MAX;
    int i = 0;

    vector <int> temp;

    coinChange( arr, ans, target, temp, mini);

     if (mini == INT_MAX) {
        cout << "No solution exists." << endl;
    } else {
        cout << "The minimum number of coins needed is " << mini << endl;
    }

    return 0;
}