#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    // outer loop
    for( int row = 1; row <= n; row++ ){
        // inner loop
        for( int col = 0; col < n ; col++ ){
            if( col < n - row ){
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