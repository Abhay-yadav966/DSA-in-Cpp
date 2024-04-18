#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void solve( int& target, int& x, int& y, int& z, int &ans, int& sum, vector <int>& temp){
    
    if( sum == target ){

        if( ans < temp.size() ){
            ans = temp.size();
        }
        return;
    }

    if( sum > target ){
        return;
    }


    // calling x
    sum = sum + x;
    temp.push_back(x);
    solve(target, x, y, z, ans, sum, temp);
    sum = sum - x;
    temp.pop_back();

    // calling y
    sum = sum + y;
    temp.push_back(y);
    solve( target, x, y, z, ans, sum, temp);
    sum = sum - y;
    temp.pop_back();

    // calling z
    sum = sum + z;
    temp.push_back(z);
    solve( target, x, y, z, ans, sum, temp);
    sum = sum - z;
    temp.pop_back();

}

int main(){

    int target = 7;
    int x = 5;
    int y = 2;
    int z = 2;

    int ans = 0;
    int sum = 0;
    vector <int> temp;

    solve( target, x, y, z, ans, sum, temp);

    cout<<"The maximum -> "<<ans<<endl;

    return 0;
}