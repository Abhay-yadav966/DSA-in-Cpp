#include<iostream>
#include<vector>
using namespace std;

void solv(vector <string> numbers, string& temp, vector <string>& ans, string digits, int & index){

    if( index >= digits.size() && temp.size() == digits.size() ){
        ans.push_back(temp);
        return;
    }

    string str = numbers[digits[index] - '0'];

    // include
    for( int i = 0; i < str.size(); i++){
    temp.push_back(str[i]);
    index = index + 1;
    solv(numbers, temp, ans, digits, index);
    index = index - 1;
    temp.pop_back();

    // exclude
    index = index + 1;
    solv(numbers, temp, ans, digits, index);
    index = index - 1;
    }

}

int main(){
    
    vector <string> numbers(10);
    numbers[2] = "abc";
    numbers[3] = "def";
    numbers[4] = "ghi";
    numbers[5] = "jkl";
    numbers[6] = "mno";
    numbers[7] = "pqrs";
    numbers[8] = "tuv";
    numbers[9] = "wxyz";

    string temp;
    vector <string> ans;

    string digits = "2";
    int index = 0;

    solv(numbers, temp, ans, digits, index);

    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;
}