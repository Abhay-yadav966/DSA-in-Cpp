#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> arr = { 1, 20, 6, 4, 5};

    int count = 0;

    for( int i = 0; i < arr.size(); i++){
        for( int j = i + 1; j < arr.size(); j++){
            if( arr[i] > arr[j]){
                count++;
            }
        }
    }

    cout<<"The Inversion Count : "<<count<<endl;

    return 0;
}