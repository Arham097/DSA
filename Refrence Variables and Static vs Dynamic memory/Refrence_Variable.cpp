#include<iostream>
using namespace std;

//BAD Practice because there in local variable which destroyed after function execution so there are nothing to be returned
int& func(int n){
    int num = n;
    int& ans = num;
    return ans;
}
//BAD Practice because there in local variable which destroyed after function execution so there are nothing to be returned
int* fun(int n){
    int* ptr = &n;
    return ptr;

}
void update2(int& n){
    n++;
}

void update(int n){
    n++;
}
int main(){
    /*
    int i =5; 

    //create a refrence variable
    int& j = i;

    cout<< i<< endl;
    i++;
    cout<< i<< endl;
    j++;
    cout<< i<< endl;
    cout<< j<< endl;
    */
   int n=5;
//    cout<<"before: "<< n<< endl;
//    update(n);
//    cout<<"after: "<< n<< endl;

//    cout<<"before: "<< n<< endl;
//    update2(n);
//    cout<<"after: "<< n<< endl;
   
//    func(n);
   fun(n);




    return 0;
}