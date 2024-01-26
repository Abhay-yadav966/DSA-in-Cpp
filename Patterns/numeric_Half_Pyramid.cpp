#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Entre the number:"<<endl;
    cin>>n;

    // outer loop
    for( int row = 1; row <= n; row++ ){
        // inner loop
        for( int col = 1; col <= row; col++ ){
            cout<<col;
        }
        cout<<endl;
    }
    return 0;
}