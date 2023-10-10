#include<iostream>
using namespace std;

// it is bad practice because any function can change this value
int score = 15;
void a(int& i){
    cout<<score <<" in a "<<endl;
    score++;
    cout<< i<< endl; 
}
void b(int& i){
    cout<<score <<" in b "<<endl;
    cout<< i<<endl;
}

int main()
{
     cout<<score <<" in main "<<endl;
    int i =5;
    a(i);
    b(i);

    return 0;
}