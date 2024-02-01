#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <vector<int>> arr = {
        { 2, 4, 6, 8},
        { 1, 3, 5, 6},
        { 9, 11, 13, 4}
    };

    int rows = arr.size();
    int cols = arr[0].size();


    vector <vector <int>> brr(cols, vector <int> (rows));

    for( int i = 0; i < arr.size(); i++ ){
        for( int j = 0; j < arr[0].size(); j++ ){
            brr[j][i] = arr[i][j];
        }
    }

    for( int i = 0; i < brr.size(); i++ ){
        for( int j = 0; j < brr[0].size(); j++ ){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}