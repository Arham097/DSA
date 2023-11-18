#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &stack, int num){
    if(stack.empty()){
        stack.push(num);
        return;
    }
    int top = stack.top();
    stack.pop();
    insertAtBottom(stack,num);
    stack.push(top);
}

void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()) return;
    
    int top = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack,top);
}

int main(){

    stack<int> s;
    s.push(10);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);

    reverseStack(s);
   while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}