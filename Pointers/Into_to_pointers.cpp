#include<iostream>

using namespace std;

int main(){
    // int num = 5;
    // cout<< num <<endl;

    // cout<<"Address of num is: "<<&num<<endl;

    // int *ptr = &num;
    // cout<<"Address is: "<<ptr<<endl;
    // cout<<"value  is: "<<*ptr<<endl;

    // double d= 4.3;
    // double *p2 = &d;

    // cout<<"Address is: "<<p2<<endl;
    // cout<<"value  is: "<<*p2<<endl;

    // cout<<"size of integer is: "<<sizeof(num)<<endl;
    // cout<<"size of int pointer is: "<<sizeof(ptr)<<endl;
    // cout<<"size of double pointer is: "<<sizeof(p2)<<endl;

    // pointer point some garbage value;
    // int *p;
    // cout<<*p<<endl;

    // shows segented error because no memory present with 0 address 
    // int *p = 0;
    // cout<<*p<<endl;


    // int i=5;
    // int *p = 0;

    // p = &i;

    // cout<<p<<endl;
    // cout<<*p<<endl;

    
    // int num =5;
    // int a = num;
    // a++;

    // cout<<num<<endl;

    // int *p = &num;
    // cout<<"before: "<<num<<endl;
    // (*p)++;
    // cout<<"after: "<<num<<endl;

    // //copying pointer//////
    // int *q = p;
    // cout<< p <<" _ "<<q<<endl;
    // cout<< *p <<" _ "<<*q<<endl;


    // int i = 3;
    // int *t = &i;
    // // (*t)++;
    // // cout<< *t <<endl;

    // *t = *t+1;
    // cout<<*t<<endl;

    // cout<<"before t: "<<t<<endl;
    // t=t+1;
    // cout<<"after t: "<<t<<endl;


    //question 1/////
    // float f =10.5;
    // float p =2.5;
    // float *ptr = &f;

    // (*ptr)++;
    // *ptr = p;

    // cout<<*ptr <<" "<<f << " "<< p<<endl;

    //Question 2///
    // int *ptr = 0;
    // int a =10;
    // *ptr = a;
    // cout<<*ptr;

    //Question 3/////

    // int a =7;
    // int *c = &a;
    // c=c+1;
    // cout<<a<<" "<<*c<<endl;

    //Question 4///
    // int a[5];
    // int *c;
    // cout<<sizeof(a)<<" "<<sizeof(c)<<endl; 

    // //Question 5////////
    // int a[] = {1,2,3,4};
    // cout<<*(a)<<" "<<*(a+1);

    //Question 6////////
    // int a[] = {1,2,3,4};
    // int *p = a++;
    // cout<<*p<<endl;


    //Question 7////////
    // int arr[] = {4,5,6,7};
    // int *p = (arr+1);
    // cout<<*arr+9;
    
    // return 0; 

    //Question 8////////
    // char b[]= "xyz";
    // char *c = &b[0];
    // cout<<c<<endl;


     //Question 0////////
    // char s[]= "hello";
    // char *p = s;
    // cout<<s[0]<<" "<<p[0];

    char *ptr;
    char Str[] = "abcdefg";
    ptr = Str;
    cout<<ptr;



    return 0; 
}