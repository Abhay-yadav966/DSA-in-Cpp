#include<iostream>
using namespace std;

int partition( int* arr, int start, int end){

    // cout<<"ABhay"<<endl;

    int pivotIndex = start;
    int pivotElement = arr[start];

    int count = 0;
    int traverse = start + 1;

    while( traverse <= end ){
        if( arr[pivotIndex] >= arr[start] ){
            count++;
        }
        start++;
        cout<<"ABhay"<<endl;
    }

    int rightIndex = start + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    int i = start;
    int j = end;

    while( i < pivotIndex && j > pivotIndex ){
        while( arr[pivotIndex] > arr[i] ){
            i++;
        }
        while( arr[pivotIndex] < arr[j] ){
            j--;
        }
    }

    if( i < pivotIndex && j > pivotIndex ){
        swap( arr[i], arr[j] );
    }
    
    return pivotIndex;
}

void quickSort( int* arr, int start , int end){

    if( start >= end ){
        return;
    }

    int pivot = partition( arr, start, end);

    quickSort( arr, start, pivot-1);
    quickSort( arr, pivot+1, end);
}


int main(){

    int arr[] = { 4, 4, 5, 13, 2, 12 };

    int size = 6;

    int start = 0;
    int end = size - 1;

    quickSort( arr, start , end);

    for( int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}