#include<iostream>
#include<math.h>
using namespace std;
int main(){

   int n;
   cin>>n;
    int i=0;
    bool isTrue = 0;
   while(i<=30){
    if (pow(2,i) ==n){
        isTrue = 1;
    }
    i++;
   }
   if(isTrue==1){
    cout<<"True";
   }
   else{
    cout<<"False";
   }

    return 0;
}
