#include<iostream>
using namespace std;


class Queue {
    int* arr;
    int front;
    int rear;

    public:
    Queue(int size){
        this->arr = new int[size];
        this->front = -1;
        this->rear = -1;
    }

    void push(int data){
        if(front == -1 && rear == -1){
            front = 0;
            rear = 0;
            arr[rear] = data;
        }else{
            rear = rear + 1;
            arr[rear] = data;
        }
    }

    void pop(){
        if(front == -1 && rear == -1){
            cout<<"Queue is empty"<<endl;
            return;
        }else{
            if(front <= rear){
                front = front + 1;
            }else{
                cout<<"Queue is empty"<<endl;
            }
        }
    }

    int getFront(){
        if(front == -1 && rear == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            if(front <= rear){
                return arr[front];
            }else{
                cout<<"Queue is empty"<<endl;
                return -1;
            }
        }
    }

    bool isEmpty(){
        if(front < rear){ 
            return false;
        }else if(front == rear && rear == -1){
            return false;

        }
        return true;
    }

    int size(){
        return rear - front + 1;
    }
};

int main(){

    Queue* q = new Queue(7);
    q->push(10);
    q->push(20);
    q->push(30);
    q->push(40);
    q->push(50);
    q->push(60);
    q->push(70);

    cout<<"Front Element : "<<q->getFront()<<endl;
    cout<<"Size of Queue : "<<q->size()<<endl;
    cout<<"Is Queue Empty : "<<q->isEmpty()<<endl;
    q->pop();
    cout<<"Front Element : "<<q->getFront()<<endl;
    cout<<"Size of Queue : "<<q->size()<<endl;
    cout<<"Is Queue Empty : "<<q->isEmpty()<<endl;


    return 0;
}