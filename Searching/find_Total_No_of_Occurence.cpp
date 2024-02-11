#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> arr{2, 3, 4, 4, 4, 4, 4, 4, 6, 8, 10};
    int target = 4;

    int start = 0;
    int end = arr.size() - 1;

    int firstOccurence = 0;
    int lastOccurence = 0;
    int totalNo = 0;

    // first occurence
    while( start <= end ){
        int mid = (start + end)/2;
        int midElement = arr[mid];

        if( midElement < target ){
            // on thr right
            start = mid + 1;
        }
        else if( midElement > target ){
            // on the left
            end = mid - 1; 
        }
        else{
            firstOccurence = mid;
            end = mid - 1;
        }
    }

    // last Occurence
    start = 0;
    end = arr.size() - 1;

    // last Occurence
    while( start <= end ){
        int mid = (start + end)/2;
        int midElement = arr[mid];

        if( midElement < target ){
            // on thr right
            start = mid + 1;
        }
        else if( midElement > target ){
            // on the left
            end = mid - 1; 
        }
        else{
            lastOccurence = mid;
            start = mid + 1;
        }
    }

    totalNo = lastOccurence - firstOccurence + 1;

    cout<<"The total number of occurence :"<<totalNo;

    return 0;
}