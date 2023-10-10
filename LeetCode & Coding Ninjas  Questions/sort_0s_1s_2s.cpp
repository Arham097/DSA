#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void sort012(int arr[], int n){
    int low = 0;
    int high = n-1;
    int mid = 0;

    while(mid<=high){
        switch (arr[mid])
        {
            case 0: 
                swap(arr[mid],arr[low]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[high]);
                high--;
                break;
        
        }
    }
}
   
int main(){
    int arr[8] = {1,1,0,2,2,0,1,0};
    sort012(arr,8);
    printArray(arr,8);
    return 0;
}