#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// This problem is also known as Kadane's Algorithm

int main(){

    vector <int> arr = { -2, -3, 4, -1, -2, 1, 5, -3};

    int sum = 0;
    int maxi = INT_MIN;

    for( int i = 0; i < arr.size(); i++ ){
        sum = sum + arr[i];
        if( sum > maxi ){
            maxi = sum;
        }

        if( sum < 0 ){
            sum = 0;
        }
    }

    cout<<"The maximum number : "<<maxi;

    return 0;
}