#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> arr{ 1, 2, 3, 4, 5, 7, 8};

    int start = 0;
    int end = arr.size() - 1;

    int missingElem = -1;

    // it will go on right
    while( start <= end ){
        int mid = (start + end)/2;
        int midElement = arr[mid];

        if( mid != arr.size() - 1 && midElement + 1 != arr[mid + 1] ){
            // checking on right
            missingElem = midElement + 1;
            break;
        }
        else if(midElement - 1 != arr[mid - 1]) {
            // checking on left
            missingElem = midElement - 1;
            break;
        }
        else{
            // continue checking on right
            start = mid + 1;
        }
    }


    // it will go on left
    start = 0;
    end = arr.size() - 1;

    while( start <= end ){
        int mid = (start + end)/2;
        int midElement = arr[mid];

        if( midElement + 1 != arr[mid + 1] ){
            // checking on right
            missingElem = midElement + 1;
            break;
        }
        else if( mid != 0 && midElement - 1 != arr[mid - 1]) {
            // checking on left
            missingElem = midElement - 1;
            break;
        }
        else{
            // continue checking on left
            end = mid - 1;
        }
    }

    cout<<"The missing element :"<<missingElem;
 
    return 0;
}