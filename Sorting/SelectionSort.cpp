#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> arr{10, 1, 4, 8, 5, 7};
    int size = arr.size();

    for( int i = 0; i < size; i++ ){
        for( int j = i + 1; j < size; j++ ){
            if( arr[i] > arr[j] ){
                swap( arr[i], arr[j] );
            }
        }
    }

    // printing sorted array
    for( int i = 0; i < size; i++ ){
        cout<<arr[i]<<" ";
    }

    return 0;
}