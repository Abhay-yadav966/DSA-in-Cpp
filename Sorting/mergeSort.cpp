#include<iostream>
#include<vector>
using namespace std;

void merge( int* arr, int start, int end){

    int mid = (start+end)/2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    // create dummy arrays
    int* arr1 = new int[len1];
    int* arr2 = new int[len2];

    int i = 0;
    int k = start;

    while( i < len1 ){
        arr1[i] = arr[k];
        i++;
        k++;
    }

    k = mid + 1;
    int j = 0;
    while( j < len2 ){
        arr2[j]=arr[k];
        k++;
        j++;
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = start;

    while( (leftIndex < len1) && (rightIndex < len2) ){
        if( arr1[leftIndex] < arr2[rightIndex] ){
            arr[mainIndex] = arr1[leftIndex];
            mainIndex++;
            leftIndex++;
        }
        else{
            arr[mainIndex] = arr2[rightIndex];
            mainIndex++;
            rightIndex++;
        }
    }

    while( leftIndex < len1 ){
        arr[mainIndex] = arr1[leftIndex];
        mainIndex++;
        leftIndex++;
    }

    while( rightIndex < len2 ){
        arr[mainIndex] = arr2[rightIndex];
        mainIndex++;
        rightIndex++;
    }

    return;
}


void mergeSort( int* arr, int start, int end){

    // base case
    if( start >= end ){
        return;
    }

    int mid = (start + end)/2;

    // recursive calls
    mergeSort( arr, start, mid );
    mergeSort( arr, mid+1, end);

    // merge
    merge(arr, start, end);
}

int main(){

     int arr[] = {4, 4, 5, 13, 2, 12};

    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size - 1;

    mergeSort(arr, start, end);

    for( int i = 0; i < size; i++ ){
        cout<<arr[i]<<" ";
    }

    return 0;
}