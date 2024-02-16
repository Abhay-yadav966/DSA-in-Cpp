#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector <vector<int>> arr{ {5, 12, 9}, {3, 7, 15}, {8, 2, 11} };

    int target = 5;

    int rows = arr.size();
    int col = arr[0].size();

    int totalElement = rows*col;

    int start = 0;
    int end = totalElement - 1;

    bool ans = false;

    while( start <= end ){
        int mid = (start + end)/2;
        int midRow = mid/rows;
        int midCol = mid%rows;

        int midElement = arr[midRow][midCol];

        if( midElement == target ){
            ans = true;
            break;
        }
        else if( midElement > target ){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    if( ans == true ){
        cout<<"Element is Present";
    }
    else{
        cout<<"Element is not present";
    }

    return 0;

}