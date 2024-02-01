#include<iostream>
#include<vector>
using namespace std;

int main(){


    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;

    vector <int> arr(size);


    for( int i = 0; i < arr.size(); i++){
        cin>>arr[i];
    }

    // finding unique
    int ans = 0;

    for( int i = 0; i < arr.size(); i++ ){
        ans = ans ^ arr[i];
    }

    cout<<"The unique element is "<<ans;

    return 0;
}