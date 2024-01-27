#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Entre the number:"<<endl;
    cin>>n; 

    // upper triangle
    // outer loop
    for( int row = 0; row < n; row++ ){
        // inner loop
        for( int col = 0; col  < n; col++ ){
            if( col < n - row ){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    // lower triangle
    // outer loop
    for( int row = 0; row < n; row++ ){
        // inner loop
        for( int col = 0; col < n; col++ ){
            if( col < row ){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    return 0;
}