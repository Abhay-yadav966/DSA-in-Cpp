#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

    vector <int> arr = { -2, -3, 4, -1, -2, 1, 5, -3};

    int startIndex = -1;
    int endIndex = -1;

    int sum = 0;
    int maxi = INT_MIN;

    for(int i = 0; i < arr.size(); i++){
        if(sum == 0){
            startIndex = i;
        }


        sum = sum + arr[i];

        if( sum > maxi ){
            maxi = sum;
            endIndex = i;
        }

        if( sum < 0 ){
            sum = 0;
        }
    }

    cout<<"The maximum no. : "<<maxi<<endl;

    cout<<"Printing the Max Sub Array : "<<endl;
    for( int i = startIndex; i <= endIndex; i++ ){
        cout<<arr[i]<<" ";
    }

    return 0;
}