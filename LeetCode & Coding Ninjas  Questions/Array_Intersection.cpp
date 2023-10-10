#include<iostream>
using namespace std;

int main(){
    string arr = "";
    int arr1[7] ={1,2,3,4,5,5,7};
    int arr2[7] ={8,7,6,4,5,12,14};
    for(int i=0; i<7; i++){
        int element = arr1[i];
        for(int j=0; j<7; j++){
            if(element==arr2[j]){
                arr+=to_string(element);
                arr+=" ";
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    cout<<arr;

    return 0;
   
}