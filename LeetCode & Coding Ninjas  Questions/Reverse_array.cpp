//Given an array/list 'ARR' of integers and a position'M, you have to reverse the array after that position

#include<iostream>
#include<math.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[], int n, int m){
    int s = m + 1;
    int e = n - 1;
    while (s<e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    
    
}
int main(){
    int arr[9] ={10,4,5,2,3,6,1,3,6};
    int n = 9;
    int m = 3;
    reverse(arr,n,m);
    print(arr,n);
    return 0;
}