#include<iostream>
using namespace std;

void print(int arr[], int s, int e ){
    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool BinarySearch(int *arr, int s, int e, int key){
    cout<<endl;
    print(arr,s,e);
    //base case
    if(s>e) return false;

    int mid = s + (e-s)/2;
    cout<<arr[mid]<<endl;

    if(arr[mid] == key) return true;

    if(arr[mid]>key){
        return BinarySearch(arr,s,mid-1,key);
    }
    
    else{
        return BinarySearch(arr,mid+1,e,key);
    }
}

int main(){

     int arr[9] = {3,5,7,8,9,11,13,15,17};
    int n =9;
    int key = 3;

    bool ans = BinarySearch(arr, 0,8,key);

    if(ans){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }

}
