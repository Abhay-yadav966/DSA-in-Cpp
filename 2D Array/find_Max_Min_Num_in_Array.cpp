#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[3][3] ={
        {5, 6, 9},
        {7, 1, 2},
        {4, 3, 12}
    };

    int maxi = INT_MIN;
    int mini = INT_MAX;

    for( int i = 0; i < 3; i++ ){
        for( int j = 0; j < 3; j++ ){
            if( maxi < arr[i][j] ){
                maxi = arr[i][j];
            }

            if( mini > arr[i][j] ){
                mini = arr[i][j];
            }
        }
    }

    cout<<"The maximum number :"<<maxi<<endl;

    cout<<"The minimum number :"<<mini;

    return 0;
}