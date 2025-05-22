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

    int deletetion(){

        int ans = arr[1];

        swap(arr[1], arr[arr.size() - 1]);
        arr.pop_back();
    
        int index = 1;
        int leftChild = 2*index;
        int rightChild = 2*index + 1;
    
        if(arr[index] > arr[leftChild] && arr[index] > arr[rightChild]){
            return ans;
        }else{
            while(index < arr.size()){
                int leftChild = 2*index;
                int rightChild = 2*index + 1;
            
                if(leftChild < arr.size() && arr[index] < arr[leftChild]){
                    swap(arr[index], arr[leftChild]);
                    index = leftChild;
                }else if(rightChild < arr.size() && arr[index] < arr[rightChild]){
                    swap(arr[index], arr[rightChild]);
                    index = rightChild;
                }else{
                    return ans;
                }
            }
        }

        return ans;
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

    int deletedData = h->deletetion();
    cout<<"Deleted Data: " << deletedData << endl;
    h->print();

    return 0;
}