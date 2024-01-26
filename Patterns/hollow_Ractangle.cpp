#include<iostream>
using namespace std;

int main(){

    int row , col;
    cout<<"Enter the no. of rows"<<endl;
    cin>>row;

    cout<<"Enter the no. of columns"<<endl;
    cin>>col;

    // outer loop
    for( int i = 0; i < row; i++){
        // inner loop
        if( i == 0 || i == row - 1 ){
            // for first & last line
            for( int j = 0; j < col; j++ ){
                cout<<"*";
            }
        }
        else{
            // for the lines in the between
            for( int j = 0; j < col; j++){
                // for the first and last in column
                if( j == 0 || j == col - 1  ){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}