#include<iostream>
using namespace std;
int search(int arr[], int size, int key){
    for(int i =0 ;i<size; i++){
        if(key == arr[i]){
            return true;
        }
    }
    return false;
}
int main(){

    int arr[10] = {0,1,4,6,7,84,25,-12,34,12};

    int key;
    cin>>key;
    bool found = search(arr,10,key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"Key is not present: "<<endl;
    }
    return 0; 
}