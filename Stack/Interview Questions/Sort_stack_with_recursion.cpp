#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &stack, int elem){
	if(stack.empty() || stack.top()<elem){
		stack.push(elem);
		return;
	}
	int top = stack.top();
	stack.pop();

	sortedInsert(stack,elem);
	stack.push(top);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty()) return;
	int top = stack.top();
	stack.pop();

	sortStack(stack);

	sortedInsert(stack,top);
}

int main(){

    stack<int> s;
    s.push(13);
    s.push(12);
    s.push(15);
    s.push(14);
    s.push(10);

    sortStack(s);
   while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}