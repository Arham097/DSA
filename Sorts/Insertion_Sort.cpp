 #include<iostream>
using namespace std;

void printArray(int arr[], int n){
    cout<<"[ ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

void insertion_sort(int arr[], int n){
    for(int i =1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j-- ){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    
}
int main(){
    int arr[5] = {10,1,7,4,8};
    int n = 5;

    insertion_sort(arr,n);
    printArray(arr,n);

    return 0; 
}