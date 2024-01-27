#include<iostream>
using namespace std;

int main(){

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    int start = 0;
    int end = size - 1;

    cout<<"Array before reversing:";

    for( int i = 0; i < size; i++ ){
        cout<<arr[i]<<" ";
    }

    // reversing 
    while( start <= end ){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout<<endl<<"Array aftre reversing:";

    for(int i = 0; i < size; i++ ){
        cout<<arr[i]<<" ";
    }

    return 0;
}