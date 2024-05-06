#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

void solve( vector<int>& candidates, int& target, vector<vector <int>>& ans, vector<int>& output, int& sum, int index){

        // base case
        if( sum == target){
            cout<<"Abhay";
            ans.push_back(output);
            return;
        }

        if( sum > target){
            return;
        }

        // 1 case
        for( int i = index; i < candidates.size(); i++){
            sum = sum + candidates[i];
            cout<<sum<<endl;
            output.push_back(candidates[i]);
            solve( candidates, target, ans, output, sum, i + 1);
            output.pop_back();
            sum = sum - candidates[i];
        }
    }

int main(){

    vector<int> candidates = {10,1,2,7,6,1,5}; 
    sort( candidates.begin(), candidates.end());
    int target = 8;

    vector <vector <int>> ans;
    vector <int> output;

    int sum = 0;
    int index = 0;

    solve( candidates, target, ans, output, sum, index);

    set<vector<int>> st;

    for( auto e:ans){
        st.insert(e);
    }

    ans.clear();
    for( auto e:st){
        ans.push_back(e);
    }

    for( int i = 0; i < ans.size(); i++){
        cout<<" [ ";
        for( int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"],";
    }

    return 0;
}