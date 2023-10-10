#include<iostream>
// #include<vector>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void merge(int arr1[], int n, int arr2[],int m, int arr3[] ){
    int i=0, j=0;
    int k = 0;
    while (i<n && j<m)
    {
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k] =arr2[j];
            j++;
            k++;
        }
    }
    
    while(i<n){
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while(j<n){
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    
}

int main(){

    int arr1[3] = {1,2,3};
    int arr2[3] = {2,5,6};

    int arr3[6] = {0};
    merge(arr1, 3, arr2, 3, arr3);

    print(arr3,6);

    return 0;
}
