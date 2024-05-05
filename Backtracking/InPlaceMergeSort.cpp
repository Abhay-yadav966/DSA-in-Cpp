#include<iostream>
#include<vector>
using namespace std;

void inPlaceMerge( vector <int>& arr, int start, int end){

    int totalLength = end - start + 1;

    int gap = totalLength/2 + totalLength%2;

    int i = start;
    while( gap > 0){
        int j = i + gap;
        while( j <= end){
            if( arr[i] > arr[j]){
                swap( arr[i], arr[j]);
            }
            i++;
            j++;
        }
        
        // gap 
        if( gap <= 1){
            gap = 0;
        }
        else{
            gap = gap/2 + gap%2;
        }

        i = start;
    }
}

void mergeSort( vector <int>& arr, int start, int end){

    // base case
    if( start >= end){
        return;
    }

    int mid = (start + end)/2;

    // left
    mergeSort( arr, start, mid);

    // right
    mergeSort( arr, mid+1, end);

    inPlaceMerge( arr, start, end);
}

int main(){

    vector <int> arr = { 9, 8, 7, 6, 5, 4, 3 ,2 , 1};

    int start = 0;
    int end = arr.size() - 1;
    cout<<"Array Before sort : "<<endl;
    for( auto i:arr){
        cout<<i<<" ";
    }
    mergeSort( arr, start, end);

    cout<<"Array After sort : "<<endl;
    for( auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}