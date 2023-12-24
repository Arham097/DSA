#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>

using namespace std;

void dfs(int node,unordered_map<int, bool> &visited,unordered_map<int,list<int>> &adjList,vector<int> &component){
    // push the answers in componenet vector
    component.push_back(node);
    // mark the ans (true)
    visited[node] = true;

    // Recursivelly Call Every Node Connected to Answer (Pushed) Node
    for(auto i: adjList[node]){
        if(!visited[i]){
            dfs(i,visited,adjList,component);
        }
    }
}

vector<vector<int>> DFS(int m, int n,vector<vector<int>> &graph){
    // Initialize Adjacecy list
    unordered_map<int,list<int>> adjList;

    // TO Make Adjacecny list
    for(int i=0; i<graph.size(); i++){
        int u = graph[i][0];
        int v =graph[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    unordered_map<int, bool> visited;
    vector<vector<int>> ans;

    // Iterate Through Every Node and Appplied DFS Traversal
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
    // Take Input about Vertices and Edges
    int m,n;
    cin>>m>>n;

    vector<vector<int>> graph;
    // Make The graph by taking values of connected Nodes
    for(int i=0; i<n; i++){
        int u,v;
        cin>>u>>v;
        graph.push_back({u,v});
    }

    vector<vector<int>> result = DFS(m,n,graph); 
    cout<<"DFS Traversal: "<<endl;
    
    // Print The answers
    for (auto i : result) {
        for (int node : i) {
            cout<<node<< " ";
        }
    return 0;
}
}