#include<iostream>
using namespace std;

void unique(int arr[], int size){
    int ans =0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    cout<<ans;
}
int main(){
    int arr[7] = {1,2,2,1,3,3,4}; 
   unique(arr,7);
    return 0; 
}