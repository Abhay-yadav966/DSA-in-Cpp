#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    // outer loop
    for( int row = n; row > 0; row-- ){
        // inner loop
        for( int col = 0; col < row; col++ ){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}