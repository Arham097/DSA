#include<iostream>
#include<vector>
using namespace std;

void addSolution(vector<vector<int>> &board,vector<vector<int>> &ans){
	vector<int> temp;
	for(int i=0; i<board.size(); i++){
		for(int j=0; j<board.size(); j++){
			temp.push_back(board[i][j]);
		}
	}
	ans.push_back(temp);
}

bool isSafe(int row, int col,vector<vector<int>> &board,int n ){
	int x = row;
	int y = col;

	//check for same row
	while(y>=0){
		if(board[x][y] == 1){
			return false;
		}
		y--;
	}
	//Check for upper diagonal
	x = row;
	y = col;
	while(x>=0 && y>=0){
		if(board[x][y] == 1){
			return false;
		}
		x--;
		y--;
	}

	//Check for lower diagonal
	x = row;
	y = col;
	while(x<n && y>=0){
		if(board[x][y] == 1){
			return false;
		}
		x++;
		y--;
	}
	return true;
}

void solve(int col,vector<vector<int>> &board, 
vector<vector<int>> &ans,int n ){
	if(col==n){
		addSolution(board,ans);
		return;
	}
	for(int row = 0; row<n; row++){
		if(isSafe(row,col,board,n)){
			board[row][col] = 1;
			solve(col+1,board,ans,n);
			// backtrack
			board[row][col] = 0;
		}
	}

}
vector<vector<int>> nQueens(int n)
{
	// Write your code here
	vector<vector<int>> board(n,vector<int>(n,0));
	vector<vector<int>> ans;

	solve(0,board,ans,n);

	return ans;
	
}
int main(){
    int n;
    cin>>n;

    vector<vector<int>>ans = nQueens(n);
    for(auto &i: ans){
        int count = 0;
        for(int j:i){
            if(count%4==0) cout<<endl;
            count++;
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}