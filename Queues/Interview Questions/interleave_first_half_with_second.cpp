#include<iostream>
#include<queue>
using namespace std;

#include <vector>
#include <queue>

using namespace std;

vector<int> rearrange(queue<int> &q){
    vector<int> ans;
    queue<int> temp;

    // Move half of the elements to the temporary queue
    int size = q.size();
    for(int i = 0; i < size / 2; i++){
        temp.push(q.front());
        q.pop();
    }

    // Interleave the elements from temp and q
    while (!temp.empty()) {
        ans.push_back(temp.front());
        temp.pop();
        ans.push_back(q.front());
        q.pop();
    }


    return ans;
}


int main(){

    queue<int> q;
    for(int i = 1; i<9; i++){
        q.push(i);
    }

    vector<int> v = rearrange(q);

    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}