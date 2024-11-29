#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    vector <int> arr = {4, 8, 5, 2, 25};
    vector <int> ans(arr.size());
    int mini = arr[arr.size()-1];

    for(int i = arr.size() - 1; i >= 0; i--){
        if(mini > arr[i+1]){
            mini = arr[i+1];
            ans[i] = mini;
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