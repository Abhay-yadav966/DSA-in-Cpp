#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// using looping - Brute Approch

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

// Recursive - Brute Approch

void findMaxSubArray( vector <int> arr, int start, int& maxi){

    // base case
    if( start >= arr.size() ){
        return;
    }

    cout<<"Start : "<<start<<endl;
    cout<<maxi<<endl;


    for( int j = start + 1; j < arr.size(); j++ ){
        int sum = 0;
        for( int k = start; k <= j; k++ ){
            sum = sum + arr[k];
        }
        if( sum > maxi ){
            maxi = sum;
        }
    }

    findMaxSubArray( arr, start+1, maxi);

}

int main(){

    vector <int> arr = {-2,1,-3,4,-1,2,1,-5,4};

    int start = 0;
    int ans = 0;
    int maxi = INT_MIN;

    findMaxSubArray( arr, start, maxi);

    cout<<"Ans : "<<maxi<<endl;

    return 0;
}