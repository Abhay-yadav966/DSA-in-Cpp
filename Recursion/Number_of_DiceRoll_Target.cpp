#include<iostream>
using namespace std;

void solve( int& n, int& k, int& target, int& count, int& temp, int& traverse){

    // base case
    if( temp == target && traverse >= n ){
        // cout<<"The value of temp -> "<<temp<<endl;
        count++;
        // cout<<"The value of Count -> "<<count<<endl;
        return;
    }

    // base case 2
    if( traverse >= n ){
        return;
    }
    
    for( int j = 1; j <= k; j++){
        temp = temp + j;
        traverse = traverse + 1;
        solve( n, k, target, count, temp, traverse);
        traverse = traverse - 1;
        temp = temp - j;
        
    }
    
}

int main(){

    int n = 1;
    int k = 6;
    int target = 3;

    int count = 0;
    int temp = 0;
    int traverse = 0;
    cout<<"Before"<<endl;
    solve( n, k, target, count, temp, traverse);

    cout<<"The Answer : "<<count<<endl;

    return 0;
}