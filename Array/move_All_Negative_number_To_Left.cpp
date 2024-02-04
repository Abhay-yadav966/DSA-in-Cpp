#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector <int> arr{1, 2, -3, 4, -5, 6};
    
    int start = 0;
    int i = 0;
    int end = arr.size() - 1;

    while( start <= end ){
        if( arr[start] < 0 ){
            swap( arr[i] , arr[start] );
            start++;
            i++;
        }
        else{
            swap(arr[start], arr[end]);
            end--;
        }
    }

    for( int i = 0; i < arr.size(); i++ ){
        cout<<arr[i]<<" ";
    }

    return 0;
}