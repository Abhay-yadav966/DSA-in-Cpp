#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Entre the number:"<<endl;
    cin>>n;

    // outer loop
    for( int row = n; row > 0; row-- ){
        // inner loop
        for( int col = 0; col < row; col++ ){
            if( row == n || row == 1 ){
                cout<<"*";
            }
            else{
                if( col == 0 || col == row -1  ){
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