#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(2);
    cout<<"The front element of a queue is: "<<q.front()<<endl;

    q.push(3);
    cout<<"The front element of a queue is: "<<q.front()<<endl;

    q.push(4);
    cout<<"The front element of a queue is: "<<q.front()<<endl;

    cout<<"The size of queue is: "<<q.size()<<endl;

    q.pop();
    cout<<"The size of queue is: "<<q.size()<<endl;
    
    q.pop();
    // q.pop();
    
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    return 0;
}