#include<iostream>
using namespace std;

#define pi 3.142
#define AREA(l,b) (l*b)

//Chain Macros
#define Instagram followers
#define followers 140

//Multiline macros
#define Elements 1,\
                 2, \
                 3
//function-like macros
#define min(a,b) (((a)<(b)) ? a : b)

int main()
{
    /*
    int r=5;
    double area = pi *r*r;
    cout<<"Area is: "<< area <<endl;
    */

    /*
    int l,b;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;

    cout<<"Area is: "<<AREA(l,b)<<endl;
    */

    // cout<<"Cyberfiction has : "<<followers<<" K followers"<<endl;

    // int arr[] = { Elements };
    // for(int i=0; i<3; i++){
    //     cout<<arr[i]<<" ";
    // }

    int a=16;
    int b=18;

    cout<<"Minimun value in "<<a<<","<<b<< " is: "<<min(a,b)<<endl; 
    

    return 0;
}