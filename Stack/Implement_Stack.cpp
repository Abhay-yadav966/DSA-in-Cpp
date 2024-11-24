#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int* arr;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int(size);
        top = -1;
    }

    void push(int data){
        if(this->top <= size - 1){
            this->top++;
            arr[this->top] = data;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(this->top < 0){
            cout<<"Stack Underflow"<<endl;
        }else{
            this->top--;
        }
    }

    void Top(){
        if(this->top >= 0 && this->top <= size - 1){
            cout<<"Top element of stack : "<<arr[this->top]<<endl;
        }
    }

    bool empty(){
        if(this->top < 0){
            return true;
        }else{
            return false;
        }
    }

    int Size(){
        return this->top + 1;
    }
};

int main(){
    Stack* s = new Stack(3);
    s->push(10);
    s->push(20);
    s->push(30);

    cout<<"Stack is empty : "<<s->empty()<<endl;
    cout<<"Size of Stack : "<<s->Size()<<endl;
    s->Top();

    return 0;
}