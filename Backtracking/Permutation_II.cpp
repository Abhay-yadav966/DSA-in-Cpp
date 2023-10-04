#include<iostream>
#include<vector>
#include<set>
using namespace std;

void solve( vector <int>& nums, int& index, vector<vector<int>>& ans){

    // base case
    if( index >= nums.size()){
        ans.push_back(nums);
        return;
    }

    for( int i = index; i < nums.size(); i++){
        swap( nums[index], nums[i]);
        index = index + 1;
        solve( nums, index, ans);
        index = index - 1;
        swap( nums[index], nums[i]);
    }
}

int main(){

    vector <int> nums = { 1,1,2};

    int index = 0;

    vector <vector<int>> ans;

    solve( nums, index, ans);

    set<vector<int>> st;

    for( auto e:ans){
        st.insert(e);
    }

    ans.clear();

    for( auto e:st){
        ans.push_back(e);
    }

    for( int i = 0; i < ans.size(); i++){
        cout<<"[ ";
        for( int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<", ";
        }
        cout<<"],";
    }

    return 0;
}