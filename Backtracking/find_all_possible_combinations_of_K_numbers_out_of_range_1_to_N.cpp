#include<iostream>
#include<vector>
using namespace std;

void combination( vector <int> arr, vector <vector<int>>& ans, vector <int>& output, int & i, int k){

    if( k == output.size() ){
        ans.push_back(output);
        return;
    }

    if( i >= arr.size() ){
        return;
    }

    // include
    output.push_back(arr[i]);
    i = i + 1;
    combination(arr, ans, output, i, k);
    i = i - 1;
    output.pop_back();


    // exclude
    i = i + 1;
    combination(arr, ans, output, i, k);
    i = i - 1;
}

int main(){

    int k = 2;
    int n;
    cout<<"Enter the range : "<<endl;
    cin>>n;

    vector <int> arr;

    for(int i = 1; i <= n; i++){
        arr.push_back(i);
    }

    vector <vector<int>> ans;
    vector <int> output;
    int i = 0;

    combination( arr, ans, output, i, k );

    for(int i = 0; i < ans.size(); i++){
        for( int j = 0; j < ans[i].size(); j++ ){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}