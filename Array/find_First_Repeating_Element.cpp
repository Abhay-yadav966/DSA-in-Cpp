#include<iostream>
#include <unordered_map>
#include<vector>
using namespace std;

int main(){

    vector <int> arr { 1, 5, 3, 4, 3, 5, 6 };

    unordered_map <int, int> hash;

    // inserting value & updating it
    for( int i = 0; i < arr.size(); i++ ){
        hash[arr[i]]++;
    }

    // element whose value will be greater than 1 will be answer
    for( int i = 0; i < arr.size(); i++ ){
        if( hash[arr[i]] > 1 ){
            cout<<"First Repeated element :"<<arr[i]<<endl;
            break;
        }
    }

    return 0;
}