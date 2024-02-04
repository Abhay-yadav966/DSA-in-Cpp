#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


// solve using simple method
// int main(){

//     vector <int> arr {1, 5, 3, 1, 4};

//     sort(arr.begin(), arr.end());

//     for( int i = 0; i < arr.size(); i++ ){
//         if( arr[i] == arr[i+1] ){
//             cout<<arr[i];
//         }
//     }

//     return 0;
// }


// solved using visited method
int main(){

    vector <int> arr { 1, 5, 3, 5, 4, 2};

    for( int i = 0; i < arr.size(); i++ ){
        int index = abs(arr[i]);  // absolute for making index always +ve because index can never be -ve

        if( arr[index - 1] > 0 ){
            arr[index - 1] = arr[index - 1] * -1; // marking it as -ve
        }
        else{
            cout<<index;
        }
    }

    return 0;
}