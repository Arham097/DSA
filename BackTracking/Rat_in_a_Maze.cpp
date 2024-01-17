#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool isSafe(int newx, int newy, vector<vector<bool>> &vis,vector<vector<int>> &arr, int n){
    return ((newx>=0 && newx<n) && (newy>=0 && newy<n) && vis[newx][newy] !=1 && arr[newx][newy] ==1);
}

void solve(int x, int y, vector<vector<int>> &arr, int n, vector<string> &ans,
            vector<vector<bool>> &vis, string path ){
        // base case
        if(x==n-1 && y ==n-1){
            ans.push_back(path);
            return ;
        }
        // 4 Directions
        // Down Left Right Up

        // Mark the Current Element Visited
        vis[x][y] = 1;

        // Down
        if(isSafe(x+1,y, vis, arr,n)){
            solve(x+1,y, arr, n, ans, vis, path+'D');
        }

        // Left
        if(isSafe(x,y-1, vis, arr,n)){
            solve(x,y-1, arr, n, ans, vis, path+'L');
        }

        //Right
        if(isSafe(x,y+1, vis, arr,n)){
            solve(x,y+1, arr, n, ans, vis, path+'R');
        }

        //Up
        if(isSafe(x-1,y, vis, arr,n)){
            solve(x-1,y, arr, n, ans, vis, path+'U');
        }

        //Unmark the current visited element when return the call;
        vis[x][y] = 0;

}

vector<string> Rat_in_a_Maze(vector<vector<int>> &arr, int n){
    vector<vector<bool>> visited (n,vector<bool>(n,0));
    vector<string> ans;
    string path = "";

    solve(0,0, arr, n, ans, visited, path);

    return ans;

}

int main(){

    vector<vector<int>> maze = {
        {1,0,0,0},
        {1,1,0,0},
        {1,1,0,0},
        {0,1,1,1},
    };
    int n = maze.size();

    vector<string> ans = Rat_in_a_Maze(maze,n);
    cout<<"Paths in Maze: "<<endl;
    for(string i: ans){
        cout<<i<<" ";
        cout<<endl;
        
    }

    return 0;
}