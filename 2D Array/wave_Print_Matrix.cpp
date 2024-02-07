#include<iostream>
using namespace std;

int main(){

    int arr[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };

    int row = 3;
    int col = 4;

    // i have to iterate wave row wise
    for( int j = 0; j < col; j++ ){
        if( (j % 2) == 0 ){
            // even top - bottom
            for( int i = 0; i < row; i++ ){
                cout<<arr[i][j]<<" ";
            }
        }
        if((j % 2) != ){
            // odd bottom - top
            for( int i = row; i > 0; i-- ){
                cout<<arr[i][j]<<" ";
            }
        }
    }

    return 0;
}