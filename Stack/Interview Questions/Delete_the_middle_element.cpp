#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s,int count, int size){
    if(count==size/2){
        s.pop();
        return;
    }
    int num = s.top();
    s.pop();
    solve(s,count+1,size);
    s.push(num);
}

int main(){

    stack<int> s;
    s.push(10);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);



    int count = 0;
    solve(s,count,s.size());

   while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}