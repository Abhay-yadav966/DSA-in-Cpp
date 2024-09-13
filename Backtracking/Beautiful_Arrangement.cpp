#include<iostream>
#include<vector>
using namespace std;

bool check( vector<int>& arr){
    // cout<<"yadav"<<endl;

    bool temp = true;

    for( int i = 0; i < arr.size(); i++){
        if( (arr[i]%(i+1)) == 0 || ((i+1)%arr[i]) == 0){
            temp = true;
        }
        else{
            return false;
        }
    }

    return temp;
}

void solve( vector<int>& arr, vector<vector<int>>& ans, int& index, int& count){

    // base case
    if( index >= arr.size()){
        // cout<<"ABhya"<<endl;
        bool c = check(arr);
        if( c == true){
            count++;
            ans.push_back(arr);
        }
        return;
    }

    // 1 case
    for( int i = index; i < arr.size(); i++){
        swap( arr[i], arr[index]);
        index = index + 1; 
        solve( arr, ans, index, count);
        index = index - 1;
        swap( arr[i], arr[index]);
    }
}

int main(){

    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;

    vector <int> arr(n);

    for( int i = 0; i < arr.size(); i++){
        int j = i + 1;
        arr[i] = j;
    }

    vector <vector<int>> ans;

    int index = 0;

    int count = 0;

    solve( arr, ans, index, count);

    cout<<"The Total Beautiful arrangement : "<<count<<endl;

    for( int i = 0; i < ans.size(); i++){
        cout<<"[ ";
        for( int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"], ";
    }
 
    return 0;
}