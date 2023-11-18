

#include<iostream>
using namespace std;

void countSort(int* arr, int n){

    // Find the maximum element
    int max_ele = INT_MIN;
    for(int i=0; i<n; i++){
        max_ele = max(arr[i],max_ele);
    }
    //create the frequency array
    int freq[max_ele+1] = {0};
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    // create the commulative frequency array

    for(int i=1; i<=max_ele; i++){
        freq[i] += freq[i-1]; 
    }

    //calclate the sorted array
    int ans[n];
    for(int i = n-1; i>=0; i-- ){
        ans[--freq[arr[i]]] = arr[i];
    }

    // copy back the ans to original array
    for(int i=0; i<n; i++){
        arr[i] = ans[i];
    }


}

int main(){
    int arr[] = {5,3,2,0,4,6};
    int n = 6;
    countSort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


// Q) Apply Count Sort When You Have Negative Element in An Array

#include<iostream>
using namespace std;

void countSort(int* arr, int n){

    //To Normalize the array
        //Find Min Element
    int min_ele = INT_MAX;
    for(int i=0; i<n; i++){
        min_ele = min(arr[i],min_ele);
    }
        //Then subtract with current element of array
    for(int i=0; i<n; i++){
        arr[i] = arr[i] - min_ele;
    }

    // Find the maximum element
    int max_ele = INT_MIN;
    for(int i=0; i<n; i++){
        max_ele = max(arr[i],max_ele);
    }
    //create the frequency array
    int freq[max_ele+1] = {0};
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    // create the commulative frequency array

    for(int i=1; i<=max_ele; i++){
        freq[i] += freq[i-1]; 
    }

    //calclate the sorted array
    int ans[n];
    for(int i = n-1; i>=0; i-- ){
        ans[--freq[arr[i]]] = arr[i];
    }
    //Then Add Back with min element which subtracted from array
    for(int i=0; i<n; i++){
        ans[i] = ans[i] + min_ele;
    }
    // copy back the ans to original array
    for(int i=0; i<n; i++){
        arr[i] = ans[i];
    }


}

int main(){
    int arr[] = {5,4,-3,2,3,-2};
    int n = 6;
    countSort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
