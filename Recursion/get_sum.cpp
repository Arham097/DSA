#include<iostream>
using namespace std;

int getSum(int* arr, int size){

    //base case
    if(size==0) return 0;
    if(size==1) return arr[0];

    int rem_sum = getSum(arr+1,size-1);
    int sum = arr[0] + rem_sum;

    return sum;
}


int main(){

    int arr[5] = {3,5,7,8,9};
    int n =5;

    int ans = getSum(arr, n);

    cout<<ans;

}
