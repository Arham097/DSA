#include<iostream>
using namespace std;

bool s_r(int arr[], int n ){
    int count =0;
    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]) count++;
    
    return count<=1;
}
int main(){
    int arr[4] = {3,4,1,2};
    int k = 2;

    if(s_r(arr,4)){
        cout<<"It is sorted and rotated array."<<endl;
    }
    else{
         cout<<"It is not sorted and rotated array."<<endl;
    }


    return 0;
}
