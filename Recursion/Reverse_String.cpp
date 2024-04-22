#include<iostream>
using namespace std;

void reverse( string& str, int& start, int& end ){

    // base case
    if( start >= end ){
        return;
    }

    swap(str[start], str[end]);
    start = start + 1;
    end = end - 1;
    reverse( str, start, end);

}

int main(){

    string str = "abcde";
    int start = 0;
    int end = str.length() - 1;

    cout<<"Before Reverse : "<<str<<endl;

    reverse( str, start, end);

    cout<<"After Reverse : "<<str<<endl;

    return 0;
}