#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> arr{1,3,5,8,0};
    vector <int> brr{3,5,6,7,9};

    // ans wala array
    vector <int> ans;

    for( int i = 0; i < arr.size(); i++ ){
        for( int j = 0; j < brr.size(); j++ ){
            if( arr[i] == brr[j] ){
                b[j] = -1; // i am marking element of 2 array because in case of Duplicate element it will handle
                ans.push_back(arr[i]);
            }
        }
    }

    // printing ans wala array
    for( int k = 0; k < ans.size(); k++ ){
        cout<<ans[k]<<" ";
    }

    return 0;
}