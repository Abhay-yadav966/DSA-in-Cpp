#include<iostream>
using namespace std;

int binarySearch( int arr[], int start, int end, int target){
    
    if( start >= end ){
        return -1;
    }

    int mid = (start + end)/2;

    if( arr[mid] == target ){
        return mid;
    }
    else if( arr[mid] > target ){
        binarySearch( arr, start, mid, target);
    }
    else{
        binarySearch( arr, mid+1, end, target);
    }


}

int main(){

    int arr[] = { 10, 20, 30, 40, 50, 60};
    int start = 0;
    int n = 6;
    int end = n - 1;

    int target = 20;

    int ans = binarySearch( arr, start, end, target);

    if(ans){
        cout<<"Element found -> "<<ans+1<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}