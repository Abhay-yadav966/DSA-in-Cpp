#include<iostream>
#include<vector>
using namespace std;

int pivotElement( vector<int>& arr, int start, int end ){

    int pivotIndex = start;
    int pivotElement = arr[pivotIndex];

    int i = start + 1;
    int j = 0;


    while( i <= end ){
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
        while( arr[left] <= pivotElement ){
            left++;
        }
        while( arr[right] >= pivotElement ){
            right--;
        }
    }

    if( left < pivotIndex && right > pivotIndex ){
        swap( arr[left], arr[right]);
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

    vector <int> arr = { 9, 8, 7, 6, 5, 4, 3, 2, 1};

    int start = 0;
    int end = arr.size() - 1;

    quickSort( arr, start, end);

    for( auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}