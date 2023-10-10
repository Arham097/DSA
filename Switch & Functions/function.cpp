//Calculate pow(a,b)

// #include<iostream>
// using namespace std;

//    int power(int a, int b) {
//     int ans =1;
//    for (int i = 0; i <b; i++)
//    {
//     ans  = ans * a;
//    }
//    return ans;
//    }
// int main(){

//    int a,b;
//    cin>>a>>b;
//    int answer = power(a,b);
//    cout<<answer;

   
//     return 0;
// }


//// Check odd or evene number/////////
#include<iostream>
using namespace std;

// void odd_or_even(int a) {
//     if(a%2==0){
//             cout<<"It is even number";
//         }
//      else{
//             cout<<"It is odd number";
//         }
//    }
// int main(){

//    //pow(a,b)
//    int a;
//    cin>>a;
//    odd_or_even(a);
    
//     return 0;
// }

// Calculate nCr/////////////
#include<iostream>
using namespace std;

// int factorial(int n){
//     int fact =1;
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     int numerator = factorial(n);
//     int denominator = factorial(n-r)*factorial(r);
//     int ans = numerator/denominator;
//     return ans;
// }
// int main(){
//     int n,r;
//     cin>>n>>r;    
    
//     cout<<"nCr = "<<nCr(n,r)<<endl;
//     return 0;
// }

///////  Prime no. or not/////////////////
// #include<iostream>
// using namespace std;

// bool isPrime(int n){
//     for(int i=2; i<n;i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cin>>n;
//     if(isPrime(n)){
//         cout<<"is a prime number"<<endl;
//     }
//     else{
//         cout<<"It is not a prime number"<<endl;
//     }
//     return 0;
// }

///////  Find nth term of A.P /////////////////
// #include<iostream>
// using namespace std;
// int AP(int n){
//     int ap= 3*n+7;
//     return ap;
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     cout<<"nth term of A.P (3*n+7) is: "<< AP(n)<<endl;
//     return 0;
// }


///////  Find no. of set bits/////////////////
// #include<iostream>
// using namespace std;
// int set_bits(int a, int b){
//    int count=0;
//    while(a!=0){
//     if(a&1 ==1){
//         count++;
//     }
//     a =a>>1;
//    }
//    while(b!=0){
//     if(b&1 ==1){
//         count++;
//     }
//     b =b>>1;
//    }
//     return count;
// }
// int main(){
//     int a,b;
//     cout<<"Enter value of a,b: ";
//     cin>>a>>b;
//     cout<<"No of set-bits is: "<<set_bits(a,b)<<endl;
//     return 0;
// }

///////  Fibonacci Series/////////////////
// #include<iostream>
// using namespace std;
// void fibbonaci(int n){
//     int a = 0 ,b = 1,nextNum = 0;
//     cout<<a<<" "<<b<<" ";
//     for (int i = 0; i<n-2; i++){
//         nextNum = a+b;
//         cout<<nextNum<<" ";
//         a = b;
//         b = nextNum;
//     } 

// }
// int main(){
//     int n;
//     cout<<"Enter Number: ";
//     cin>>n;
//     fibbonaci(n);   
//     return 0;
// }

///////  nth term of fibbonaci/////////////////

#include<iostream>
using namespace std;
int fibbonaci(int n){
    int a = 0 ,b = 1,nextNum = 0;
    for (int i = 0; i<n-2; i++){
        nextNum = a+b;
        a = b;
        b = nextNum;
    } 
    return nextNum;
}
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"nth term of fibbonaci is:"<<fibbonaci(n)<<endl;;   
    return 0;
}