#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
using namespace std;


// class graph{
//     public:
//     unordered_map<int,list<int>> adj;
    
//     void addEdge(int u, int v, bool direction){
//         // direction = 0 -> Undirected graph
//         // direction = 1 -> Directed graph

//         // Create an edge from u to v
//         adj[u].push_back(v);
//         if(direction==0){
//             adj[v].push_back(u);
//         }
//     }
//     void printAjdList(){
//         for(auto i: adj){
//             cout<<i.first<<"->";
//             for(auto j: i.second){
//                 cout<<j<<",";
//             }
//             cout<<endl;
//         }
//     }

// };

// #include <iostream>
// #include <vector>

// using namespace std;

// class Graph {
// private:
//     int numVertices;
//     vector<vector<int>> adjMatrix;

// public:
//     Graph(int vertices) : numVertices(vertices), adjMatrix(vertices, vector<int>(vertices, 0)) {}

//     void addEdge(int fromVertex, int toVertex) {
//         if (isValidVertex(fromVertex) && isValidVertex(toVertex)) {
//             adjMatrix[fromVertex][toVertex] = 1;
//             adjMatrix[toVertex][fromVertex] = 1;
//         }
//     }

//     void display() {
//         for (const auto &row : adjMatrix) {
//             for (int value : row) {
//                 cout << value << " ";
//             }
//             cout << endl;
//         }
//     }

// private:
//     bool isValidVertex(int vertex) const {
//         return vertex >= 0 && vertex < numVertices;
//     }
// };

// int main() {
//     Graph graph(4);

//     graph.addEdge(0, 1);
//     graph.addEdge(1, 2);
//     graph.addEdge(2, 3);
//     graph.addEdge(3, 0);

//     graph.display();

//     return 0;
// }

#include<iostream>
using namespace std;

class graph{
    public:
    int vertices;
    vector<vector<int>> adjMat;

    graph(int ver){
        vertices = ver;
        // adjMatrix(vertices, vector<int>(vertices, 0))
        adjMat.resize(ver,vector<int>(ver,0));
    }
    void addEdge(int u, int v, bool direction){
        if(isValid(u) && isValid(v)){
            adjMat[u][v] = 1;
            if(direction==0){
                adjMat[v][u] = 1;
            }
        }
    }
    void display(){
        for(const auto &row: adjMat){
            for(int value: row){
                cout<<value<<" ";
            }
            cout<<endl;
        }
    }
    private:
    bool isValid(int vertex){
        return vertex>=0 && vertex<vertices;
    }

};

int main(){
    graph g(4);
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(3,0,1);

    g.display();

    return 0;
}