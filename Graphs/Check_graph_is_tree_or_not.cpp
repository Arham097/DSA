// #include<iostream>
// #include <unordered_map>
// #include <list>
// #include <queue>
// #include <vector>
// #include <string>
// using namespace std;

// bool isCyclicBFS(int src,unordered_map<int,list<int>> &adjList,
//     unordered_map<int,bool> &visited){
//         unordered_map<int,int> parent;

//         parent[src] = -1;
//         visited[src] = 1;
//         queue<int> q;
//         q.push(src);
        
//         while(!q.empty()){
//             int front = q.front();
//             q.pop();
           
//             for(auto neighbours:adjList[front]){
//                 if(visited[neighbours] == true && neighbours != parent[front]){
//                     return true;
//                 }
//                 else if(!visited[neighbours]){
//                     q.push(neighbours);
//                     visited[neighbours] = 1;
//                     parent[neighbours] = front;
//                 }
//             }
//         }
//     return false;
// }
// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
//     unordered_map<int,list<int>> adjList;
//     for(int i=0; i<m; i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adjList[u].push_back(v);
//         adjList[v].push_back(u);
//     }

//     unordered_map<int,bool> visited;
//     for(int i=0; i<n; i++){
//         if(!visited[i]){
//             bool ans = isCyclicBFS(i,adjList,visited);
//             if(ans==1)
//                 return "Yes";
//         }
//     }
//     return "No";
// }


#include<iostream>
#include<unordered_map>
#include<queue>
#include<list>
#include<vector>

using namespace std;

bool isCycleBFS(int src,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adjList){
    unordered_map<int,int> parent;
    parent[src] = -1;
    visited[src] = 1;

    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(auto neighbours:adjList[front]){
            if(visited[neighbours]== true && neighbours!=parent[front]){
                return true;
            }
            else if(!visited[neighbours]){
                q.push(neighbours);
                visited[neighbours] = 1;
                parent[neighbours] = front;
            }
        }
    }
    return false;
}
bool Graph_is_Tree(vector<vector<int>> &graph, int n, int m){
    unordered_map<int,list<int>> adjList;
    for(int i=0; i<m; i++){
        int u = graph[i][0];
        int v = graph[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    unordered_map<int,bool> visited;
    bool cycle = false;
    for(int i = 0; i<n; i++){
        if(!visited[i]){
            bool ans = isCycleBFS(i,visited,adjList);
            if(ans==1){
                cycle = true;
            }

        }
    }
    // return "No";
    if(cycle == false && m == (n-1)){
        return true;
    }
    return false;
}

int main(){
    int n;
    cout<<"Number of Vertices: ";
    cin>>n;

    int m;
    cout<<"Number of Edges: ";
    cin>>m;

    vector<vector<int>> graph;
    cout<<"Enter Connections: "<<endl;
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        graph.push_back({u,v});
    }
    bool ans = Graph_is_Tree(graph,n,m);

    cout<<"Given Graph is" <<(ans == 1 ? "": " not")<<" a Tree"  <<endl;

    return 0;
}