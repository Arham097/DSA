#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>

using namespace std;

void dfs(int node,unordered_map<int, bool> &visited,unordered_map<int,list<int>> &adjList,vector<int> &component){
    component.push_back(node);
    visited[node] = true;

    for(auto i: adjList[node]){
        if(!visited[i]){
            dfs(i,visited,adjList,component);
        }
    }
}

vector<vector<int>> DFS(int m, int n,vector<vector<int>> &graph){
    unordered_map<int,list<int>> adjList;
    for(int i=0; i<graph.size(); i++){
        int u = graph[i][0];
        int v =graph[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    unordered_map<int, bool> visited;
    vector<vector<int>> ans;

    for(int i=0; i<m; i++){
        if(!visited[i]){
            vector<int> component;
            dfs(i,visited,adjList,component);
            ans.push_back(component);
        }
    }
    return ans;
}

int main(){
    int m,n;
    cin>>m>>n;

    vector<vector<int>> graph;
    for(int i=0; i<n; i++){
        int u,v;
        cin>>u>>v;
        graph.push_back({u,v});
    }

    vector<vector<int>> result = DFS(m,n,graph); 
    cout<<"DFS Traversal: "<<endl;
    for (auto i : result) {
        for (int node : i) {
            cout<<node<< " ";
        }
    return 0;
}
}