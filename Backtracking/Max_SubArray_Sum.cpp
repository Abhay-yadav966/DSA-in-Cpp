#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

    vector <int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};

    int maxi = INT_MIN;

    for( int i = 0; i < arr.size(); i++){
        for( int j = i+1; j < arr.size(); j++){
            int sum = 0;
            int index = i;
            while( index <= j){
                sum = sum + arr[index];
                index++;
            }
            if( sum > maxi){
                maxi = sum;
            }
        }
    }

    cout<<"The maximum of the subarray : "<<maxi<<endl;

    return 0;
}