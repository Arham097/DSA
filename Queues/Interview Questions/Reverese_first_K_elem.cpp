#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> modify(queue<int> q, int k){
    int n = q.size();
    stack<int> s;
    for(int i=0; i<k; i++){
        int elem = q.front();
        q.pop();
        s.push(elem);
    }
    while(!s.empty()){
        int elem = s.top();
        s.pop();
        q.push(elem);
    }
    int t = n-k;
    while(t--){
        int elem = q.front();
        q.pop();
        q.push(elem);
    }
    return q;
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 2;
    queue<int> mq = modify(q,k);
    while(!mq.empty()){
        int elem = mq.front();
        mq.pop();
        cout<<elem<<" ";
    }
    

    return 0;
}