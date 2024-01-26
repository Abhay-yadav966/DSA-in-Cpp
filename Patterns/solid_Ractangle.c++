#include <iostream>
using namespace std;

int main(){
    // printing the solid ractangle pattern 
    // *****
    // *****
    // *****

    //row 
    for(int i = 0; i < 3; i++ ){
        // column
        for( int j = 0; j < 5; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
}