#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        this->val = data;
        this->next = NULL;
    }
};

void print(Node* & head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void sort(Node* & head){
    Node* zero = NULL;
    Node* TailZero = NULL;
    Node* one = NULL;
    Node* TailOne = NULL;
    Node* two = NULL;
    Node* TailTwo = NULL;

    Node* temp = head;

    while(temp != NULL){
        if(temp->val == 0){
            if(zero == NULL && TailZero == NULL){
                // Node* newNode = new Node(temp->val);
                // zero = newNode;
                // TailZero = newNode;
                Node* curr = temp;
                temp = temp->next;

                zero = curr;
                TailZero = curr;

                curr->next = NULL;
                delete curr;

            }else{
                Node* curr = temp;
                temp = temp->next;


                TailZero->next = curr;
                TailZero = curr;
                
                curr->next = NULL;
                delete curr;
            }
        }

        if(temp->val == 1){
            if(one == NULL && TailOne == NULL){
                // Node* newNode = new Node(temp->val);
                // one = newNode;
                // TailOne = newNode;

                Node* curr = temp;
                temp = temp->next;

                one = curr;
                TailOne = curr;

                curr->next = NULL;
                delete curr;

            }else{
                // Node* newNode = new Node(temp->val);
                // TailOne->next = newNode;
                // TailOne = newNode;
                 Node* curr = temp;
                temp = temp->next;

                TailOne->next = curr;
                TailOne = curr;

                curr->next = NULL;
                delete curr;                
            }
        }

        if(temp->val == 2){
            if(two == NULL && TailTwo == NULL){
                // Node* newNode = new Node(temp->val);
                // two = newNode;
                // TailTwo = newNode;
                Node* curr = temp;
                temp = temp->next;

                two = curr;
                TailTwo = curr;
            
                curr->next = NULL;
                delete curr;  
            }else{
                // Node* newNode = new Node(temp->val);
                // TailTwo->next = newNode;
                // TailTwo = newNode;
                Node* curr = temp;
                temp = temp->next;

                TailTwo->next = curr;
                TailTwo = curr;
            
                curr->next = NULL;
                delete curr;  
            }
        }
    }

    TailZero->next = one;
    TailOne->next = two;

    print(zero);
}

int main(){
    
    Node* head = new Node(2);
    Node* first = new Node(0);
    Node* second = new Node(2);
    Node* third = new Node(1);
    Node* fourth = new Node(1);
    Node* fifth = new Node(0);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    print(head);
    
    sort(head);

    return 0;
}