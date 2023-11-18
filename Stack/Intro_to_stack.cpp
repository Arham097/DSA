#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    //properties
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    //behavior
    void Push(int d){
        if(size-top>1){
            top++;
            arr[top] = d;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void Pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;

        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};


int main(){
    Stack st(5);
    st.Push(5);
    st.Push(10);
    st.Push(15);
    st.Push(10);
    st.Push(10);
    st.Push(15);
    st.Push(15);

    cout<<st.peek()<<endl;

    st.Pop();

    cout<<st.peek()<<endl;

    st.Pop();

    cout<<st.peek()<<endl;

    st.Pop();

    if(st.isEmpty()){
        cout<<"Stack is Empty "<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    




   /* stack<int> s;
    s.push(10);
    s.push(12);
    s.push(15);
    s.push(15);

   while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
   }
   cout<<endl;

    // s.pop();

    // cout<<"Printing top element: "<< s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size of stack is: " <<s.size()<<endl;
*/


    return 0 ;
}