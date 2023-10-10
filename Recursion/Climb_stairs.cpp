#include<iostream>
using namespace std;

int climb(int n){

    //base case
    if(n<0) return 0;
    if(n==0) return 1;

    int ans = climb(n-1) + climb(n-2);

    return ans;

}

int main(){

    int n;
    cin>>n;

    int ans = climb(n);

    cout<<ans<<endl;
    

}
