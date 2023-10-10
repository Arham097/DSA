#include<iostream>
#include<math.h>
using namespace  std;


int main(){
//Decimal to Binary////////////////////
//Logic 1//////////////////////////

    int n;
    cout<<"Enter number in Decimal: ";
    cin>>n;
    int i = 0, ans = 0;

    while (n!=0)
    {
       int rem = n%2;
       ans = (rem*pow(10,i))+ans;
        n/=2;
        i++;
    }
    cout<<"Answer is: "<< ans<<endl;
    
    // int n ;
    // cout<<"Enter Number: ";
    // cin>>n;
    // int answer = 0;
    // int i = 0;
    // while(n!=0){
    //     int digit = n&1;
    //     answer = (digit * pow(10,i)) + answer;

    //     n = n>>1;
    //     i++;
    // }
    // cout<<"Answer is: "<<answer<<endl;


// Binary to Decimal///////////////
    // int n;
    // cout<<"Enter Number in Binary: ";
    // cin>>n;
    // int ans = 0;
    // int i = 0;
    // while (n!=0)
    // {
    //     int digit = n%10;
    //     if(digit == 1){
    //         ans = ans + pow(2,i);
    //     }
    //     n/=10;
    //     i++;
    // }
    // cout<<"Answer is: "<<ans<<endl;
    
    return 0;
}