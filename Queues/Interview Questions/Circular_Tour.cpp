//Time Complexity O(n)
// Time Complexity O(1)

#include<iostream>
using namespace std;

struct petrolPump{
    int petrol;
    int distance;
};

class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int balance = 0;
       int deficit = 0;
       int start = 0;
       
       for(int i=0; i<n; i++){
           balance+= p[i].petrol - p[i].distance;
           if(balance<0){
           deficit+=balance;
           start = i+1;
           balance = 0;
       }
    }
       if(deficit+balance>=0){
           return start;
       }
       else{
           return -1;
       }
    }
};

int main(){
    int n = 4;
    petrolPump Pumps[n] = {{4,6},{6,5},{7,3},{4,5}};

    Solution obj;

    int start = obj.tour(Pumps,n);

    if (start==-1){
        cout<<" No tour exist"<<endl;
    }
    else{
        cout<<"The truck start at petrol pump:"<<start<<endl;
    }
    return 0;
}
