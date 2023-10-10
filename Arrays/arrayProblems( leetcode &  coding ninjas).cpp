// Unique Elements

// #include<iostream>
// using namespace std;

// void unique(int arr[], int size){
//     int ans =0;
//     for(int i=0; i<size; i++){
//         ans = ans ^ arr[i];
//     }
//     cout<<ans;
// }
// int main(){
//     int arr[7] = {1,2,2,1,3,3,4}; 
//    unique(arr,7);
//     return 0; 
// }

// Array Intersection////////////////
// #include<iostream>
// using namespace std;

// int main(){
//     string arr = "";
//     int arr1[7] ={1,2,3,4,5,5,7};
//     int arr2[7] ={8,7,6,4,5,12,14};
//     for(int i=0; i<7; i++){
//         int element = arr1[i];
//         for(int j=0; j<7; j++){
//             if(element==arr2[j]){
//                 arr+=to_string(element);
//                 arr+=" ";
//                 arr2[j] = INT_MIN;
//                 break;
//             }
//         }
//     }
//     cout<<arr;

//     return 0;
   
// }

///////////PairSum/////////////
// #include <iostream>
// #include <vector>
// #include <algorithm> // Include the algorithm library for the 'sort' function
// using namespace std;

// vector<vector<int>> pairSum(vector<int> &arr, int s) {
//     vector<vector<int>> ans;
//     for (int i = 0; i < arr.size(); i++) {
//         for (int j = i + 1; j < arr.size(); j++) {
//             if (arr[i] + arr[j] == s) {
//                 vector<int> temp;
//                 temp.push_back(min(arr[i], arr[j]));
//                 temp.push_back(max(arr[i], arr[j]));
//                 ans.push_back(temp);
//             }
//         }
//     }
//     sort(ans.begin(), ans.end()); // Sort the result vector of vectors
//     return ans;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
//     int targetSum = 7;

//     vector<vector<int>> result = pairSum(arr, targetSum);

//     // Printing the result
//     for (vector<int> &pair : result) {
//         cout << "(" << pair[0] << ", " << pair[1] << ") ";
//     }
    
//     return 0;
// }


// Triplets SUm//////////////
// #include <bits/stdc++.h>
// using namespace std;

// Function to find triplets in the array
// vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
//     vector<vector<int>> result; // Initialize a vector to store the triplets

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             for (int k = j + 1; k < n; k++) {
//                 // Check if the sum of elements at indices i, j, and k equals K
//                 if (arr[i] + arr[j] + arr[k] == K) {
//                     vector<int> temp; // Create a temporary vector to store the triplet
//                     temp.push_back(arr[i]); // Add the first element of the triplet
//                     temp.push_back(arr[j]); // Add the second element of the triplet
//                     temp.push_back(arr[k]); // Add the third element of the triplet

//                     // Sort the temporary vector to handle permutations
//                     sort(temp.begin(), temp.end());

//                     // Check if the triplet is already in the result to avoid duplicates
//                     bool isDuplicateFound = false;
//                     for (const vector<int> &element : result) {
//                         if (element == temp) { // Compare each element in the result with temp
//                             isDuplicateFound = true;
//                             break;
//                         }
//                     }

//                     // If not a duplicate, add the triplet to the result vector
//                     if (!isDuplicateFound)
//                         result.push_back(temp);
//                 }
//             }
//         }
//     }

//     return result; // Return the vector of unique triplets
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
//     int n = arr.size();
//     int K = 12;

//     vector<vector<int>> triplets = findTriplets(arr, n, K);

//     // Printing the found triplets
//     for (const vector<int> &triplet : triplets) {
//         cout << "(" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << ") ";
//     }

//     return 0;
// }

// ///////sort 0 1/////////

// #include<iostream>
// using namespace std;
// void printArray(int arr[], int n){
//     for(int i=0; i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void sortOne(int arr[], int n){
//     int i = 0, j=n-1;
//     while (i<j)
//     {
//         while(arr[i]==0 && i<j){
//             i++;
//         }
//         while(arr[j]==1 && i<j){
//             j--;
//         }
//         if(i<j){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
// }
// int main(){
//     int arr[8] = {1,1,0,0,0,0,1,0};
//     sortOne(arr,8);
//     printArray(arr,8);
//     return 0;
// }


//////sort 0 1 2 /////////

// #include<iostream>
// using namespace std;
// void printArray(int arr[], int n){
//     for(int i=0; i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void sort012(int arr[], int n){
//     int low = 0;
//     int high = n-1;
//     int mid = 0;

//     while(mid<=high){
//         switch (arr[mid])
//         {
//             case 0: 
//                 swap(arr[mid],arr[low]);
//                 low++;
//                 mid++;
//                 break;
//             case 1:
//                 mid++;
//                 break;
//             case 2:
//                 swap(arr[mid],arr[high]);
//                 high--;
//                 break;
        
//         }
//     }
// }
   
// int main(){
//     int arr[8] = {1,1,0,2,2,0,1,0};
//     sort012(arr,8);
//     printArray(arr,8);
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

/////// First index of peak element///////////////

// #include<iostream>
// using namespace std;

// int peak(int arr[], int n){
//     int s = 0;
//     int e = n - 1;
//     int ans = -1;
//     int mid = s + ((e-s)/2);

//     while(s<e){
//         if(arr[mid]<arr[mid+1]){
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + ((e-s)/2);
//     }
//     return mid;
// }
// int main(){
//     int arr[4] = {4,7,10,1};
//     cout<<"Index of peak element is: "<<peak(arr,4)<<endl;

//     return 0; 
// }

////////// First index of peak element///////////////

// #include<iostream>
// using namespace std;

// int pivot(int arr[], int n){
//     int s = 0;
//     int e = n - 1;
//     int ans = -1;
//     int mid = s + ((e-s)/2);

//     while(s<e){
//         if(arr[mid]>=arr[0]){
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + ((e-s)/2);
//     }
//     return s;
// }
// int main(){
//     int arr[4] = {4,7,10,1};
//     cout<<"Index of pivot eleme nt is: "<<pivot(arr,4)<<endl;

//     return 0; 
// }

//////////FInd Square root of the following////////////
// #include<iostream>
// using namespace std;

// int Sqroot(int x){
//     int s = 0;
//     int e = x;
//     int mid = s +(e-s)/2;
//     int ans = -1;
//     while(s<=e){
//         int square = mid*mid;
//         if(square == x){
//             return mid;
//         }
//         else if(square<x){
//             ans = mid;
//             s = mid+1;
//         }
//         else{
//             e = mid-1;
//         }
//          mid = s +(e-s)/2;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;

//     cout<<"Square root: "<<Sqroot(n)<<endl;

//     return 0; 
// }


//////////FInd Square root with precisionof the following////////////
// #include<iostream>
// using namespace std;

// int Sqroot(int x){
//     int s = 0;
//     int e = x;
//     int mid = s +(e-s)/2;
//     int ans = -1;
//     while(s<=e){
//         int square = mid*mid;
//         if(square == x){
//             return mid;
//         }
//         else if(square<x){
//             ans = mid;
//             s = mid+1;
//         }
//         else{
//             e = mid-1;
//         }
//          mid = s +(e-s)/2;
//     }
//     return ans;
// }
// double morePrecision(int n, int precision, int tempSol){
//     double factor =1;
//     double ans = tempSol;
//     for(int i=0;i<precision;i++){
//         factor/=10;
//         for(double j=ans; j*j<n; j= j+factor){
//             ans = j;
//         }
//     }
//     return ans;
// }

// double morePrecision(int n, int pre, int ts){
//     double factor =1;
//     double ans = ts;
//     for(int i=0; i<pre;i++){
//         factor/=10;
//         for(double j=ans; j*j <n; j+=factor){
//             ans = j;
//         }

//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     int tempSol = Sqroot(n);
//     cout<<"Square root: "<<morePrecision(n,3,tempSol);

//     return 0; 
// }



///////// Book allocation problem///////////

// #include<iostream>
// using namespace std;
// bool isPossible(int arr[], int n, int m, int mid){
//     int studentCount = 1;
//     int pageSum = 0;
//     for(int i=0; i<n; i++){
//         if(pageSum+arr[i]<=mid){
//             pageSum+=arr[i];
//         }
//         else{
//             studentCount++;
//             if(studentCount>m || arr[i]>mid){
//                 return false;
//             }
//             pageSum = 0;
//             pageSum += arr[i];
//         }
//     }
//     if (studentCount==m) return true;
// }

// int allocateBooks(int arr[], int n, int m){
//     int s = 0;
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum+=arr[i];
//     }
//     int e = sum;
//     int mid = s + (e-s)/2;
//     int ans = -1;
//     while(s<=e){
//         if(isPossible(arr,n,m,mid)){
//             ans = mid;
//             e = mid -1;
//         }
//         else{
//             s = mid+1;
//         }

//        mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int main(){
//     int arr[4] = {10,20,30,40};
//     int n = 4;
//     int m = 2 ;

//     cout<<"Minimum pages: "<<allocateBooks(arr,n,m)<<endl;
// }


///////// Painter' Partition problem///////////

// #include<iostream>
// using namespace std;

// bool isPossible(int arr[], int n, int k, int mid ){
//     int painterCount =1;
//     int boardSum = 0;
//     for(int i=0; i<n;i++){
//         if(boardSum+arr[i]<=mid){
//             boardSum+=arr[i];
//         }
//         else{
//             painterCount++;
//             if(painterCount>k || arr[i]>mid){
//                 return false;
//             }
//             boardSum =0;
//             boardSum+=arr[i];
//         }
//     }
//     if(painterCount==k) return true;
// }
// int partition(int arr[], int n, int k){
//     int s = 0;
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum+=arr[i];
//     }
//     int e = sum;
//     int mid = s + (e-s)/2;  
//     int ans = -1;

//     while(s<=e){
//         if(isPossible(arr,n,k,mid)){
//             ans = mid;
//             e =mid-1;
//         }
//         else{
//             s =mid+1;
//         }
//         mid =  s + (e-s)/2;
//     }
//     return ans;
// }

// int main(){
//     int arr[3] = {1,2,3};
//     int n = 3;
//     int k = 2 ;

//     cout<<"Minimum boards: "<<partition(arr,n,k)<<endl;
// }


///////// Aggressive Cows problem///////////

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool isPossible(vector<int>& arr, int n, int k, int mid){
//     int cowCount=1;
//     int lastPos = arr[0];
//     for(int i=0; i<n; i++){
//         if(arr[i]-lastPos>=mid){
//             cowCount++;
//             if(cowCount==k){
//                 return true;
//             }
//             lastPos = arr[i];
//         }
//     }
//     return false;
// }

// int placed(vector<int>& arr, int n, int k){
//     sort(arr.begin(),arr.end());
//     int s = 0;
//     int maxi = -1;
//     for(int i=0; i<n; i++){
//         maxi = max(maxi,arr[i]);
//     }
//     int e = maxi;
//     int mid = s + (e-s)/2;
//     int ans =-1;
//     while(s<=e){
//         if (isPossible(arr,n,k, mid)){
//             ans = mid;
//             s = mid+1;
//         }
//         else{
//             e =mid-1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> arr = {1,2,3};
//     int n = 3;
//     int k = 2 ;

//     cout<<"Maximum distance: "<<placed(arr,n,k)<<endl;
// }


