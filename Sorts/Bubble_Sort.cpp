#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    cout<<"[ ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

void bubble_sort(int arr[], int n){
    for(int i=1; i<n;i++){
        bool swapped = false;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }    
}
}

int main(){
    int arr[4] = {4,3,2,1};
    int n = 4;

    bubble_sort(arr,n);
    printArray(arr,n);

    return 0; 
}