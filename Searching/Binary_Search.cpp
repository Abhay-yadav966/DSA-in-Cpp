#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> arr{ 3, 5, 6, 8, 11, 12, 14, 15, 17, 18};
    int target = 8;

    int size = arr.size();

    int start = 0;
    int end = size - 1;

    while( start <= end ){
        
        int mid = (start + end)/2;
        cout<<"Start -> "<<start<<"End -> "<<end<<endl;
        cout<<"Mid -> "<<mid<<endl;
        int midElement = arr[mid];

        // if it found in right
        if( midElement < target ){
            cout<<arr[mid]<<endl;
            start = mid + 1;
        }
        else if(midElement > target){
            // if it is found in left
            cout<<arr[mid]<<endl;
            end = mid - 1;
        }
        else{
            // if it is found on mid
            cout<<"Element is present in array at :"<<mid<<endl;
            break;
        }
    }

    

    return 0;
}