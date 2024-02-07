#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> arr{ 2, 4, 5, 6, 8, 10, 12, 16};
    int target = 12;

    int size = arr.size();

    int start = 0;
    int end = size - 1;

    while( start <= end ){
        
        int mid = (start + end)/2;

        int midElement = arr[mid];

        // if it found in right
        if( midElement < target ){
            start = mid + 1;
        }
        else if(midElement > target){
            // if it is found in left
            end = mid - 1;
        }
        else{
            // if it is found on mid
            cout<<"Element is present in array at :"<<mid<<endl;
        }
    }

    

    return 0;
}