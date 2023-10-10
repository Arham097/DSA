#include<iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void Rotate(int arr[], int n, int k){
    int temp[4] = {0};
    for(int i=0; i<n; i++){
        temp[(i+k)%n] = arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }
}
int main(){
    int arr[4] = {1,2,3,4};
    int k = 2;

    Rotate(arr,4,k); 
    print(arr,4);  

    return 0;
}

///////////By vector//////////////////

#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


void Rotate(vector<int>& arr, int n, int k){
    vector<int> temp(n);
    for(int i=0; i<n; i++){
        temp[(i+k)%n] = arr[i];
    }
    arr =temp;

}
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    int k = 2;

    Rotate(arr,4,k); 
    print(arr,4);  

    return 0;
}


