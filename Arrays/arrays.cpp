// #include<iostream>
// using namespace std;
//  void printArray(int arr[], int size){
//     for(int i=0 ; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int a[3] = {1,2,3};
//     int size = 3;
//     printArray(a,size);

//     return 0;
// }


// max min values/////////////////////////
// #include<iostream>
// using namespace std;
// int getMax(int num[], int n){
//     int maxi = INT_MIN;
//     for(int i =0 ; i<n; i++){

//         maxi = max(maxi,num[i]);
//         // if(num[i]>max){
//         //     max= num[i];
//         // }
//     }
//     return maxi;
// }

// int getMin(int num[], int n){
//     int mini = INT_MAX;
//     for(int i =0 ; i<n; i++){
//         mini = min(mini,num[i]);

//         // if(num[i]<min){
//         //     min= num[i];
//         // }
//     }
//     return mini;
// }
// int main(){
//     int size;
//     cin>>size;
//     int num[100];
//     for (int i = 0; i < size; i++)
//     {
//         cin>>num[i];
//     }
    
//     cout<<"maximum value is: "<<getMax(num,size)<<endl;
//     cout<<"minimum value is: "<<getMin(num,size)<<endl;

//     return 0;
// }

//////////////sum of array////////////////

// #include<iostream>
// using namespace std;
//  int sumOfArray(int arr[], int size){
//     int sum = 0;
//     for(int i=0 ; i<size; i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
// int main(){
//     int num[3];
//     int size;
//     cout<<"Enter size: ";
//     cin>>size;
//     for(int i; i<size; i++){
//         cin>>num[i];
//     }
//     cout<<"Sum of array is: "<<sumOfArray(num, size)<<endl;  

    
//     return 0;
// }

///////////Reverse an array///////////////
// #include<iostream>
// using namespace std;
// void reverse(int arr[], int n){
//     int start =0;
//     int end = n-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
    
// }
// void printArray(int arr[],int size){
//     for (int i=0; i<size; i++ ){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[6] = {1,4,0,5,-2,15};
//     int brr[5] = {2,6,3,9,4};

//     reverse(arr,6);
//     reverse(brr,5);

//     printArray(arr,6);
//     printArray(brr,5);
//     return 0;
// }


///////////Reverse Succesive elements in an array///////////////
// #include<iostream>
// using namespace std;
// void reverse(int arr[], int n){
//     int start =0;
//     int end = n-1;
//     while(start<end){
//         swap(arr[start],arr[start+1]);
//         start+=2;
        
//     }
    
// }
// void printArray(int arr[],int size){
//     for (int i=0; i<size; i++ ){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[8] = {1,4,0,5,-2,15,45,65};
//     int brr[7] = {2,6,3,9,4,-1,-2};

//     reverse(arr,8);
//     reverse(brr,7);

//     printArray(arr,8);
//     printArray(brr,7);
//     return 0;
// }



//// custom swap/////////
///////////Reverse an array///////////////
#include<iostream>
using namespace std;
int max_value(int arr[], int n){
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        maxi = max(arr[i],maxi); 
    }
    return maxi;
}   

int main(){
    int arr[6] = {1,4,0,5,-2,15};

    cout<<max_value(arr,6);
  
    return 0;
}


