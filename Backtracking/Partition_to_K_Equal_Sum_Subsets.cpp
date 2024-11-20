#include<iostream>
#include<vector>
using namespace std;

void solv(vector<int> nums, int reqSum, int& index, vector <vector<int>> &ans, vector <int> &output, int & sum){

        if( sum == reqSum ){
            ans.push_back(output);
            return;
        }

        if( sum > reqSum || index >= nums.size() ){
            return;
        }

        output.push_back(nums[index]);
        sum = sum + nums[index];
        index = index + 1;
        solv(nums, reqSum, index, ans, output, sum);
        index = index - 1;
        sum = sum - nums[index];
        output.pop_back();

        index = index + 1;
        solv(nums, reqSum, index, ans, output, sum);
        index = index - 1;

    }

    int main() {

        vector<int> nums = {2, 1, 4, 5, 6}; 
        int k = 3;

        int totalSum = 0;
        for(int i = 0; i < nums.size(); i++){
            totalSum = totalSum + nums[i];
        }

        // if(totalSum % k != 0){
            // return false;
        // }

        int reqSum = totalSum/k;
        int index = 0;

        int sum = 0;
        vector <vector<int>> ans;
        vector <int> output;

        solv(nums, reqSum, index, ans, output, sum);

        for(int i = 0; i < ans.size(); i++){
            cout<<"[";
            for(int j = 0; j < ans[i].size(); j++){
                cout<<ans[i][j]<<",";
            }
            cout<<"]"<<endl;
        }

        return 0;
    }