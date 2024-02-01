#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> arr {4,5,6,9,10};
    vector <int> brr {2,1,8,9,1};

    // union of array
    vector <int> crr;

    // inserting element of 1st array in crr
    for( int i = 0; i < arr.size(); i++ ){
        crr.push_back(arr[i]);
    }

    // inserting elements of second array
    for( int j = 0; j < brr.size(); j++ ){
        crr.push_back(brr[j]);
    }

    // printing union array
    for( int k = 0; k < crr.size(); k++ ){
        cout<<crr[k]<<" ";
    }

    return 0;
}