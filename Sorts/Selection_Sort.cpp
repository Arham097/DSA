#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

void sel_sort(int arr[], int n){
    for(int i=0; i<n-1;i++){
      int minIndex=i;
      for(int j=i+1; j<n; j++){
        if(arr[j]<arr[minIndex]){
            minIndex = j;
        }
      }
      for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
      swap(arr[i],arr[minIndex]);
      cout<<"Round :"<< i+1<<"   ";
    }
}

int main(){
    int arr[6] = {6,3,4,2,0,-1};
    int n = 6;

    sel_sort(arr,n);
    printArray(arr,n);

    return 0; 
}