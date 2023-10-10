#include<iostream>
using namespace std;
int main(){
    //////////////////  1  //////////////////////
    // int a =2;
    // switch(a){
    //     case 1: cout<<"First"<<endl;
    //         break;
    //     case 2: cout<<"Second"<<endl;
    //         break;
    //     default:cout<<"It is default case:"<<endl;
        
    // }
    
    //////////////////  2  ////////////////////// 
    // char ch = '1';
    // switch(ch){
    //     case 1: cout<<"First"<<endl;
    //         break;
    //     case '1': cout<<"Character one"<<endl;
    //         break;
    //     default:cout<<"It is default case:"<<endl;
        
    // }

        //////////////////  3  ////////////////////// 
    // char ch = 'a';
    // switch(ch){
    //     case 1: cout<<"First"<<endl;
    //         break;
    //     case '1': cout<<"Character one"<<endl;
    //         break;
    //     default:cout<<"It is default case"<<endl;
        
    // }

    //////////////////  Nestted Switch ////////////////////// 
    // char ch = '1';
    // int num = 1;
    // switch(ch){
    //     case 1: cout<<"First"<<endl;
    //         break;
    //     case '1':switch(num){
    //             case 1:cout<<"Character one"<<endl;
    //             break;
    //     }
    //         break;
    //     default:cout<<"It is default case"<<endl;
    // }

    //////// Infinite loop break with exit function/////////
    // while (1)
    // {
    //  char ch = '1';
    // switch(ch){
    //     case 1: cout<<"First"<<endl;
    //         break;
    //     case '1':cout<<"Character one"<<endl;
    //             break;
    //     default:cout<<"It is default case"<<endl;
    //     }
    //     exit(0);
    // }
    
    /////////////SImple Calculator/////////////////
    // int a,b;
    // cout<<"Enter the value of a: ";
    // cin>>a;
    // cout<<"Enter the value of b: ";
    // cin>>b;
    // char op;
    // cout<<"Enter operation you want to perform: ";
    // cin>>op;
    // switch (op)
    // {
    // case '+':
    //     cout<<"a + b = "<<a+b<<endl;
    //     break;
    // case '-':
    //     cout<<"a - b = "<<a-b<<endl;
    //     break;
    // case '*':
    //     cout<<"a * b = "<<a*b<<endl;
    //     break;
    // case '/':
    //     cout<<"a / b = "<<a/b<<endl;
    //     break;
    // default:
    //     break;
    // }
    
    int amount;
    cout<<"Enter amount: ";
    cin>>amount;
    int Rs100,Rs50,Rs20,Re1;

    switch(1){
        case 1:
            Rs100 = amount / 100;
            amount = amount % 100;
            cout<<"No of hundreds: "<<Rs100<<endl;
        case 2:
            Rs50 = amount / 50;
            amount = amount%50;
            cout<<"No of fiftiess: "<<Rs50<<endl;
        case 3:
            Rs20 = amount / 20;
            amount = amount%20;
            cout<<"No of  twenties: "<<Rs20<<endl;
        case 4:
            Re1 = amount / 1;
            amount = amount%1;
            cout<<"No of ones: "<<Re1<<endl;

    }
    return 0;
}