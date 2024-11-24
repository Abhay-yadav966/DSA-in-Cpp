#include<iostream>
using namespace std;

class Stack{

    int *arr;
    int size;
    int top1;
    int top2;

    public:
    Stack(int size){
        this->size = size;
        arr = new int[size];
        this->top1 = -1;
        this->top2 = size;
    }

    void push1(int data){
        if((top2 - top1 - 1) > 0){
            top1++;
            arr[top1] = data;
        }else{
            cout<<"Stack1 is overflow"<<endl;
        }
    }

    void pop1(){
        if(top1 >= 0){
            top1--;
        }else{
            cout<<"Stack1 is underflow"<<endl;
        }
    }

    void push2(int data){
        if((top2 - top1 - 1) > 0){
            top2--;
            arr[top2] = data;
        }else{
            cout<<"Stack2 is overflow"<<endl;
        }
    }

    void pop2(){
        if(top2 >= size){
            cout<<"Stack2 is underflow"<<endl;
        }else{
            top2++;
        }
    }
};

int main(){

    Stack s(5);
    s.push1(10);
    s.push1(20);
    s.push2(30);
    s.push2(40);

    
    return 0;
}