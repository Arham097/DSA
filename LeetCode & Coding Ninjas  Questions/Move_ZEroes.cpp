#include<iostream>
// #include<vector>
using namespace std;


void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void move(int arr[], int n){
   int i=0;
   for(int j=0; j<n; j++){
    if(arr[j]!=0){
        swap(arr[j], arr[i]);
        i++;
    }
   }
    
    
}  

int main(){

    int arr[6] = {0,2,0,3,12,0};
    int n = 6;
    
    move(arr,n);

    print(arr,n);

    return 0;
}
