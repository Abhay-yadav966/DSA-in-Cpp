#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> arr{ 10, 1, 7, 6, 14, 9};
    int size = arr.size();

    // no. of rounds will be 1 less then size (size - 1)
    for( int rounds = 1; rounds < size; rounds++ ){
        for( int j = 0; j < size; j++ ){
            if( arr[j] > arr[j + 1] ){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // printing array
    for( int i = 0; i < size; i++ ){
        cout<<arr[i]<<" ";
    }

    return 0;
}