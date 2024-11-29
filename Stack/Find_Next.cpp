#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    vector <int> arr = {4, 8, 1, 2, 25};
    vector <int> ans(arr.size());
    int mini = INT_MAX;

    for(int i = arr.size() - 1; i >= 0; i--){
        if(mini > arr[i]){
            ans[i] = arr[i];
            mini = arr[i];
        }else{
            ans[i] = mini;
        }
    }

    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}