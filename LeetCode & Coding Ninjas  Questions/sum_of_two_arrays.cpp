#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sum_of_Array(vector<int>& arr1, int m, vector<int>& arr2, int n){
   int i= m-1;
   int j= n-1;
   vector<int> arr3;
   
   int carry=0;
   while(i>=0 && j>=0){
    int val1 = arr1[i];
    int val2 = arr2[j];

    int sum =val1+val2+carry;
    carry = sum /10;
    int num = sum%10;
    arr3.push_back(num);
    i--;
    j--;
   }
   while(i>=0){
        int sum = arr1[i] + carry;
        carry = sum /10;
        int num = sum%10;
        arr3.push_back(num);
        i--;
   }
    while(j>=0){
        int sum = arr2[j] + carry;
        carry = sum /10;
        int num = sum%10;
        arr3.push_back(num);
        j--;
   }
   while (carry!=0)
   {
    int sum = carry;
    carry = sum /10;
    int num = sum%10;
    arr3.push_back(num);
   }
   

    reverse(arr3.begin(), arr3.end());
    return arr3;
}

int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(4);

    vector<int> arr2;
    arr2.push_back(1);
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(4);

    vector<int>result = sum_of_Array(arr1,4,arr2,4);

    for(int i: result){
        cout<<i<<" ";
    }

    return 0;
}

///////////By vector//////////////////


