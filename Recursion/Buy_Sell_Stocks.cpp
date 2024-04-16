#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main(){

    vector <int> prices = { 7,6,4,3,1};

    int profit = 0;
    int mini = INT_MAX;
    int index = 0;

    int maxi = INT_MIN;

    for( int i = 0; i < prices.size(); i++){
        if( prices[i] < mini ){
            mini = prices[i];
            index = i;
        }
    }  

    if( index == prices.size() - 1 ){
        mini = prices[0];
        index = 0;
    }

    for( int j = index + 1; j < prices.size(); j++){
        if( prices[j] > maxi && prices[j] > mini){
            maxi = prices[j];
        }
    }

    if( maxi == INT_MIN || mini == INT_MAX ){
        profit = 0;
    }
    else{
        cout<<"The value of Minimum : "<<mini<<endl;
        cout<<"The value of Maximum : "<<maxi<<endl;

        profit = maxi - mini;
    }


    cout<<"The Profit : "<<profit<<endl;

    return 0;
}