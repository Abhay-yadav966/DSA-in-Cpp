#include<iostream>
#include<vector>
using namespace std;

int pivotElement( vector<int>& arr, int start, int end ){

    int pivotIndex = start;  // for pivot as end  => int pivotIndex = end;
    int pivotElement = arr[pivotIndex];

    int i = start + 1; // for pivot as end  => int i = start;
    int j = 0;


    while( i <= end ){   // for pivot as end => while( i < end )
        if( arr[i] <= pivotElement ){
            j++;
        }
        i++;
    }

    int rightIndex = start + j;
    swap( arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    int left = start;
    int right = end;

    while( left < pivotIndex && right > pivotIndex ){
        while( arr[left] < pivotElement ){
            left++;
        }
        while( arr[right] >= pivotElement ){
            right--;
        }
        if( left < pivotIndex && right > pivotIndex ){
            swap( arr[left], arr[right]);
        } 
    }


    return pivotIndex;

}

void quickSort( vector<int>& arr, int start, int end ){

    if( start >= end){
        return;
    }

    int pivot = pivotElement( arr, start, end);

    // left call
    quickSort( arr, start, pivot - 1);

    // right call
    quickSort( arr, pivot + 1, end);

}

int main(){

    vector <int> arr = { 5, 3, 7, 8, 2  ,6,7 ,8 ,9};

    int start = 0;
    int end = arr.size() - 1;

    quickSort( arr, start, end);

    for( auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}