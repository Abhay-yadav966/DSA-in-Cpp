#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(){
        this->val = 0;
        this->next = NULL;
    }

    Node(int data){
        this->val = data;
        this->next = NULL;
    }
};

int findLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

int main(){

    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    Node* third = new Node(4);
    Node* fourth = new Node(5);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    // fourth->next = fifth;

    int k = 3;
    int length = findLength(head);
    int position = length - k + 1;

    int i = 1;
    Node* temp = head;
    while(i <= position){
        if(i == position){
            cout<<"Node found : "<<temp->val<<endl;
            break;
        }
        temp = temp->next;
        i++;
    }

    return 0;
}