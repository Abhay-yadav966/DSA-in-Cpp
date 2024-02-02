// on leetcode 75
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> arr{2, 0, 2, 1, 1, 0, 2, 1};

    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while( start <= end ){
        if( arr[start] == 0 ){
            swap(arr[i], arr[start]);
            start++;
            i++;
        }
        else if( arr[start] == 1 ){
            start++;
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

