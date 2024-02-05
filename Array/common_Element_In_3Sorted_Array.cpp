#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){

    vector <int> arr{1, 5, 10, 20, 40, 80, 30};
    vector <int> brr{6, 7, 20, 80, 100, 30};
    vector <int> crr{3, 4, 15, 20, 30, 70, 80, 120};

    unordered_map <int, int> hash;

    // inserting arr wala data in hash
    for( int i = 0; i < arr.size(); i++ ){
        hash[arr[i]]++;
    }

    // inserting brr wala data
    for( int j = 0; j < brr.size(); j++ ){
        hash[brr[j]]++;
    }

    // inserting crr wala data
    for( int k = 0; k < crr.size(); k++ ){
        hash[crr[k]]++;
    }

    

    if( arr.size() > brr.size() ){
        for( int i = 0; i < arr.size(); i++){
            if( hash[arr[i]] == 3 ){
                cout<<arr[i]<<" ";
            }
        }

    }
    else if( brr.size() > crr.size() ){
         for( int j = 0; j < brr.size(); j++){
            if( hash[brr[j]] == 3 ){
                cout<<brr[j]<<" ";
            }
        }
    }
    else{
        for( int k = 0; k < brr.size(); k++){
            if( hash[brr[k]] == 3 ){
                cout<<brr[k]<<" ";
            }
        }
    }


    return 0;
}