// FInd Modular exponantion

#include<iostream>
#include<vector>
using namespace std;

int modulo(int a, int n, int m){
    int res =1;

    while(n>0){
        if(n&1){
            res = (1LL * (res) *(a)%m)%m;
        }
        a = (1LL * (a)%m *(a)%m)%m;
        n = n>>1;
    }

    return res;
}

int main(){
   int num,pow,mod;
   cin>>num>>pow>>mod;

   int ans = modulo(num,pow,mod);

   cout<<"Anser is: "<<ans;

    return 0; 
}