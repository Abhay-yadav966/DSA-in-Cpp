#include<iostream>
using namespace std;

int main(){

    int num;
    string temp;
    int total;
    int sum;
    int size;
    for(int i = 10; i <= 250; i++){
        temp = to_string(i);
        size = temp.length();
        sum = 0;
        for(int j = 0; j < size; j++){
            num = temp[j] - '0';
            total = 1;
            for(int k = 0; k < size; k++){
                total = total * num;
            }
            sum = sum + total;
        }
        if(sum == i){
            cout<<"The ArmStrong number : "<<i<<endl;
        }
    }

    return 0;
}