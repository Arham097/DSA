#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

void countSort(int* arr, int n, int pos){
    // making freq array
    int freq[10] = {0};
    for(int i=0; i<n; i++){
        freq[(arr[i]/pos)%10]++;
    }
    // making cumulative freq arr
    for(int i=1; i<10; i++){
        freq[i] += freq[i-1];
    }

    // ans array
    int ans[n];
    for(int i=n-1; i>=0; i--){
        ans[--freq[(arr[i]/pos)%10]] = arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i] = ans[i];
    }
}

void RadixSort(int* arr, int n){
    int max_ele = INT_MIN;
    for(int i =0; i<n; i++){
        max_ele = max(arr[i],max_ele);
    }
    for(int pos=1; max_ele/pos>0; pos*=10){
        countSort(arr, n, pos);
    }
}


int main(){
    int arr[] = {5,102,78,607,2,999};
    int n = 6;
    RadixSort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}