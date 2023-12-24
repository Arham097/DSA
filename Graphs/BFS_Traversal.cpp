#include <list>
#include <unordered_map>
#include <queue>
#include <vector>
#include<iostream>

using namespace std;

// Make Adjacency list
void makeAdjList(unordered_map<int, list<int>> &adjList, vector<vector<int>> &adj) {
    for (int i = 0; i < adj.size(); i++) {
        int u = adj[i][0];
        int v = adj[i][1];

        adjList[u].push_back(v);
        // adjList[v].push_back(u); for undirected graph comment out this line
    
    }
}

void bfs(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int startNode) {
    queue<int> q;
    // push the source/ first node in the queue
    q.push(startNode);
    visited[startNode] = true;

    while (!q.empty()) {
        int frontNode = q.front();
        q.pop();

        // store front node to ans
        ans.push_back(frontNode);

        // traverse all neighbors of front node
        for (auto i : adjList[frontNode]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj) {
    unordered_map<int, list<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    makeAdjList(adjList, adj);

    // traverse all components of a graph
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            bfs(adjList, visited, ans, i);
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> adj;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj.push_back({u,v});
    }
    vector<int> bfsResult = bfsTraversal(n, adj);

    // Display the result of BFS traversal
    cout << "BFS Traversal: ";
    for (int node : bfsResult) {
        cout << node << " ";
    }
    cout << std::endl;

    return 0;
}