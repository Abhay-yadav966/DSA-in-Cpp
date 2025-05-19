#include<iostream>
#include<vector>
using namespace std;

class Heap{
    public:
    vector<int> arr;
    Heap(){
        arr.push_back(-1); // 0th index is not used
    }

    void insert(int val){
        arr.push_back(val);

        int index = arr.size() - 1;

        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i = 1; i < arr.size(); i++){
            cout<< arr[i] << " ";
        }
    }
};

int main(){

    Heap* h = new Heap();
    h->insert(50);
    h->insert(30);
    h->insert(20);
    h->insert(15);
    h->insert(10);
    h->insert(8);

    h->print();
    cout << endl;
    h->insert(100);

    h->print();
    return 0;
}