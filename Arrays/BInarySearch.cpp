// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key){
//     int start = 0;
//     int end = n - 1;

//     int mid = start + ((end-start)/2);
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(key>arr[mid]){
//             start = mid+1;  
//         }
//         else{
//             end = mid - 1; 
//         }
//         mid = start + ((end-start)/2);
//     }
//     return -1;
// }

// int main(){
//     int even[8] = {2,4,6,8,10,12,14,16};
//     int odd[5]={1,3,5,7,9};

//     int evenIndex = binarySearch(even,8,10);
//     cout<<"Index of 10 is: "<<evenIndex<<endl;

//     int oddIndex = binarySearch(odd,5,9);
//     cout<<"Index of 9 is: "<<oddIndex<<endl; 

//     return 0; 
// }

/////// First and last occurence and total number of occurence///////////////

// #include<iostream>
// using namespace std;

// int firstOcc(int arr[], int n, int key){
//     int s = 0;
//     int e = n - 1;
//     int ans = -1;
//     int mid = s + ((e-s)/2);
    
//     while(s<=e){
//         if(arr[mid]==key){
//             ans = mid;
//             e = mid-1;
//         }
//         else if(key>arr[mid]){
//             s = mid+1;
//         }
//         else{
//             e = mid -1;
//         }
//     mid = s + ((e-s)/2);
//     }
//     return ans; 
// }

// int lastOcc(int arr[], int n, int key){
//     int s = 0;
//     int e = n - 1;
//     int ans = -1;
//     int mid = s + ((e-s)/2);
    
//     while(s<=e){
//         if(arr[mid]==key){
//             ans = mid;
//             s = mid+1;
//         }
//         else if(key>arr[mid]){
//             s = mid+1;
//         }
//         else{
//             e = mid -1;
//         }
//     mid = s + ((e-s)/2);
//     }
//     return ans; 
// }
// int main(){
//     int even[8] = {1,2,3,3,3,4,4,4};
   

//     int first = firstOcc(even,8,3);
//     int last = lastOcc(even,8,3);
//     cout<<"First Occurence of 3 is: "<<first<<endl;
//     cout<<"Last Occurence of 3 is: "<<last<<endl;
//     cout<<"Total Number of occurence of 3 is: "<<(last-first +1)<<endl;

//     return 0; 
// }