#include<iostream>
#include<math.h>
using namespace std;
int main(){

   int n;
   cin>>n;
   int ans = 0;
   int m=n;
   int mask = 0;
    if(n==0){
        cout<<1;
      
    }
    else{

   while(m!=0){

    mask = (mask<<1)|1;
    m= m>>1;
   }
   ans = (~n) & mask; 
    cout<<ans;
    }

    return 0;
}
