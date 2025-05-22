#include<iostream>
using namespace std;

void build_max_heap(int* arr, int size){

    for(int i = (size/2)-2; i >= 0; i--){
        int index = i;
        while(index < size){
            int largest = index;
            int leftChild = 2*largest + 1;
            int rightChild = 2*largest + 2;

            if(leftChild < size && arr[leftChild] > arr[largest]){
                largest = leftChild;
            }

            if(rightChild < size && arr[rightChild] > arr[largest]){
                largest = rightChild;
            }

            if(largest != index){
                swap(arr[index], arr[largest]);
                index = largest;
            }else{
                break;
            }
        }
    }

} 

int main(){

    int arr[] = {4, 10, 3, 5, 1};
    int size = 5;
    build_max_heap(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}