#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }
    // Insertion in O(log n)
    void insert(int val){
        size++;
        int index = size;
        arr[index] = val;

        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
    // Deletion in O(log n)
void deletion() {
    if (size == 0) {
        cout << "deletion is not possible" << endl;
        return;
    }
    arr[1] = arr[size];
    size--;

    int i = 1;
    while (i <= size / 2) {  
        int leftIndex = 2 * i;
        int rightIndex = 2 * i + 1;
        int larger = (rightIndex <= size && arr[rightIndex] > arr[leftIndex]) ? rightIndex : leftIndex;
        if (arr[i] < arr[larger]) {
            swap(arr[i], arr[larger]);
            i = larger;
        } else {
            return;
        }
    }
}
    void print(){
        for(int i=1;i<=size; i++ ){
            cout<<arr[i]<<" ";
        }
    }
};


void heapify(int* arr, int n, int i){
        int largest = i;
        int left = 2*i;
        int right  = 2*i+1;

        if(left<=n && arr[largest]<arr[left]){
            largest = left;
        }
        if(right<=n && arr[largest]<arr[right]){
            largest = right;
        }
        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }

    }
void heapsort(int *arr, int n){
    int size = n;
    while(size>1){
        swap(arr[size],arr[1]);
        size--;

        heapify(arr,size,1);
    }
}
int main(){
    heap h;
    // h.insert(2);
    // h.insert(1);
    // h.insert(5);
    // h.insert(10);
    // h.print();
    // h.deletion();
    // cout<<endl;;
    // h.print();
    int arr[] = {-1,54,53,55,52,50};
    int n = 5;

    for(int i = n/2; i>0 ; i--){
        heapify(arr,n,i);
    }

    heapsort(arr,n);

    for(int i = 1; i<=n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
