#include<stack>
#include<queue>
#include<iostream>
using namespace std;

class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int> s ;
        while(!q.empty()){
            int elem = q.front();
            q.pop();
            s.push(elem);
        }
        while(!s.empty()){
            int elem = s.top();
            s.pop();
            q.push(elem);
        }
        return q;
    }
};
