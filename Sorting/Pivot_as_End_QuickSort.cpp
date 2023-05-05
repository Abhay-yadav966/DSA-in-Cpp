#include<iostream>
#include<vector>
using namespace std;

int partition( vector <int>& arr, int start, int end){

    int pivotIndex = end;
    int pivotElement = arr[pivotIndex];

    int count = 0;
    for( int i = end - 1; i >= start; i--){
        if( arr[i] > pivotElement){
            count++;
        }
    }

    int rightPosition = end - count;
    swap( arr[pivotIndex], arr[rightPosition]);
    pivotIndex = rightPosition;

    int left = start;
    int right = end;

    while( left < pivotIndex && right > pivotIndex){
        while( arr[left] < pivotElement){
            left++;
        }

        while( arr[right] >= pivotElement){
            right--;
        }
    } 

    if( left < pivotIndex && right > pivotIndex){
        swap( arr[left], arr[right]);
    }

    return pivotIndex;
}

void quickSort( vector <int>& arr, int start, int end){

    // base case
    if( start >= end){
        return;
    }

    int pivot = partition( arr, start, end);

    // left call
    quickSort( arr, start, pivot - 1);

    // right call
    quickSort( arr, pivot + 1, end);

}

int main(){

    vector <int> arr = { 9, 8, 7, 6, 5, 4, 3, 2, 1};

    int start = 0;
    int end = arr.size() - 1;

    cout<<"Array before sorting : "<<endl;
    for( auto i:arr){
        cout<<i<<" ";
    }

    quickSort( arr, start, end);

    cout<<endl<<"Array After sorting : "<<endl;
    for( auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}