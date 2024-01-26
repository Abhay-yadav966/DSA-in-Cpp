#include<iostream>
using namespace std;

int main(){

    // outer loop
    for(int i = 0; i< 5; i++){
        // inner loop
        for( int j = 0; j < 5; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}