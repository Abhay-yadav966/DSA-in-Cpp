#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    // outer loop
    for( int row = n; row > 0; row-- ){
        // innner loop
        for( int col = 1; col <= row; col++ ){
            cout<<col;
        }
        cout<<endl;
    }

    return 0;
}