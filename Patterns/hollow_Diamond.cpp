#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Entre the number:"<<endl;
    cin>>n;

    // upper part
    for( int row = 1; row <= n; row++ ){
        
        // spaces
        for( int col = 0; col < n - row; col++ ){
            cout<<" ";
        }

        // stars
        for( int col = 0; col < 2*row - 1; col++ ){
            if(col == 0 || col == 2*row - 2){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }


    // lower part
    for( int row = 0; row < n; row++ ){
        // spaces
        for( int col = 0; col < row; col++ ){
            cout<<" ";
        }

        // stars
        for( int col = 0; col < 2*n - 2*row-1; col++ ){
            if( col == 0 || col == 2*n - 2*row -2  ){
                cout<< "*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}