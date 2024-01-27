#include<iostream>
using namespace std;

int main(){

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    int start = 0;
    int end = size - 1;

    while( start < end ){

        // for odd
        if( start == end ){
            cout<<arr[start]<<" ";
        }
        else{
            // for even
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }

        start++;
        end--;
    }

    return 0;
}