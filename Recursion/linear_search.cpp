#include<iostream>
using namespace std;

bool linearSearch(int* arr, int size,int key){

    //base case
    if(size==0) return 0;

    if(arr[0]==key) return true;

    bool found = linearSearch(arr+1, size-1,key);
    return found;
}


int main(){

    int arr[5] = {3,5,7,8,9};
    int n =5;
    int key = 3;

    bool ans = linearSearch(arr, n,key);

    if(ans){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }

}
