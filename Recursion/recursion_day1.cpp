#include<iostream>
using namespace std;

int fib(int n){

    //base cases
    if(n==0) return 0;
    if(n==1) return 1;

    //recursive relation
    int ans = fib(n-1) + fib (n-2);

    return ans;
}

/*
void reach_Home(int src, int dest){

    //base case
    if(src == dest){
        cout<<"Reached ";
        return;
    }
    //recursive call
    src++;
    reach_Home(src,dest);
}
*/

/*
void print_num(int n){

    if(n==0) return;

    //Tail Recursion
    // cout<<n<<" ";
    // print_num(n-1);

    //Head Recursion
    print_num(n-1);
    cout<<n<<" ";

}
*/

/*
int power_of_2(int n){

    //base case
    if(n==0) return 1;

    //recursive relation
    int sm_pb = power_of_2(n-1);
    int bg_pb = 2*sm_pb;

    return bg_pb;
}
*/


/*int factorial(int n){

    //base class
    if(n==0) return 1;

    //recursive relation
    int smallerProb = factorial(n-1);
    int bigProb = n* smallerProb;

    return bigProb;

}
*/

int main(){

    /*
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;
    */

   /*
    int n ;
    cin>>n;
    int ans = power_of_2(n);
    cout<<ans<<endl;
    */
    
   /*
    int n;
    cin>>n;
    
    print_num(n);
    */
   
   /*
    int src =1;
    int dest = 10;

    reach_Home(src,dest);
    */

    int n;
    cin>>n;

    int ans = fib(n);
    cout<< ans;
    return 0;
}