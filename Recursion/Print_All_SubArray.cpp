#include<iostream>
#include<vector>
using namespace std;

void solve( vector <int>& arr, int& i, int& j){

    // base case
    if( j > arr.size() ){
        i = i + 1;
        j = i + 1;
        solve( arr, i, j);
        return;
    }

    for( int index = i; index < j; index++ ){
        cout<<arr[index]<<" ";
    }
    cout<<endl;

    j = j + 1;
    solve( arr, i, j);

}

int main(){

    vector <int> arr = { 1, 2, 3, 4, 5};

    int i = 0;
    int j = i + 1;

    solve( arr, i, j);

    return 0;
}