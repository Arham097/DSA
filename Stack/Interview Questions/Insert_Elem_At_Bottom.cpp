#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>& myStack, int count, int size, int x) {
    if (count == size) {
        myStack.push(x);
        return;
    }
    int top = myStack.top();
    myStack.pop();
    solve(myStack, count + 1, size, x);
    myStack.push(top);
}

int main(){

    stack<int> s;
    s.push(10);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);



    int count = 0;
    int x =12; 
    int size = s.size();
    solve(s, count, size, x);

   while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}