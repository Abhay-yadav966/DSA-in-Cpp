#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printList(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){

    Node* head = new Node(9);
    Node* first = new Node(1);
    Node* second = new Node(3);
    Node* third = new Node(5);
    Node* four = new Node(9);
    Node* five = new Node(4);
    Node* six = new Node(10);
    Node* seven = new Node(1);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next=four;
    four->next=five;
    five->next = six;
    six->next = seven;

    cout<<"Before Removing : "<<endl;
    printList(head);
    cout<<endl;

    int m = 6;
    int n = 1;

    Node* temp = head;
    int i = 1;
    while(i <= m-1){
        temp = temp->next;
        i++;
    }

    Node* newNode = temp->next;
    i = 1;

    while(i <= n){
        newNode = newNode->next;
        i++;
    }

    temp->next= newNode;

    cout<<"After Removing : "<<endl;
    printList(head);

    return 0;
}