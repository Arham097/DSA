#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;

//rotate 90 degree////

void rotate(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size(); i++){
            for(int j=i+1; j<(matrix.size()) ; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0; i<matrix.size(); i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix.size();j++){
                cout<<matrix[i][j]<<" ";
            }
        }
}


//Binary search in 2d array (level 1)///////////
 bool searchMatrix2(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int rowIndex = 0;
        int colIndex= col-1;

        while(rowIndex<row && colIndex>=0){
            int element = matrix[rowIndex][colIndex];
            if(element ==target){
                return 1;
            }
            if(element<target){
                rowIndex++;
            }
            else{
                colIndex--;
            }
        }
        return 0;
    }


//Binary search in 2d array (level 1)///////////
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int start = 0;
        int end = row*col-1;

         int mid = start + (end-start)/2;
        while(start<=end){
            int element  = matrix[mid/col][mid%col];

            if(element == target){
                return 1;
            }
            if(element<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start + (end-start)/2;
        }
        return 0;
    }



// spirial matrix///////////////

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int total = row*col;

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;

        while (count < total) {
    for (int index = startingCol; count < total && index <= endingCol; index++) {
        ans.push_back(matrix[startingRow][index]);
        count++;
    }
    startingRow++;

    for (int index = startingRow; count < total && index <= endingRow; index++) {
        ans.push_back(matrix[index][endingCol]);
        count++;
    }
    endingCol--;

    for (int index = endingCol; count < total && index >= startingCol; index--) {
        ans.push_back(matrix[endingRow][index]);
        count++;
    }
    endingRow--;

    for (int index = endingRow; count < total && index >= startingRow; index--) {
        ans.push_back(matrix[index][startingCol]);
        count++;
    }
    startingCol++;
}

        return ans;
}
//print like a sine wave////////////////

void printWave(int arr[][3], int nrow, int col){
    for(int col=0; col<3; col++){
        if(col&1){
            for(int row =nrow-1; row>=0; row--){
                cout<<arr[row][col]<< " ";
            }
        }
        else{
            for(int row=0; row<3; row++){
                cout<<arr[row][col]<< " ";
            }
        }
    }
}


///Print largest row^th sum and row index//////
void lar_row_sum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
        int rowIndex = -1;
    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<3; col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi =sum;
            rowIndex = row;
        }

    }
        cout<<rowIndex<<" -> "<<maxi<<" ";

}

///to print sum of rows or column of 2d arrays///
// void printSum(int arr[][3], int row, int col){
    //row wise////////////////

    // for(int i=0; i<row; i++){
    //     int sum=0;
    //     for(int j=0; j<col; j++){
    //         sum+=arr[i][j];
    //     }
    //     cout<<sum<<" ";
    // }

    ///coloumn wise///////////////////

    // for(int i=0; i<col; i++){
    //     int sum=0;
    //     for(int j=0; j<row; j++){
    //         sum+=arr[j][i];
    //     }
    //     cout<<sum<<" ";
    // }
// }

//// Find the target number in matrix////////////
bool isPresent(int arr[][4], int t, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==t) return true;
        }
    }
    return false;
}

int main(){

    int arr[3][3];
    vector<vector<int>> matrix(3, vector<int>(3));

    // int  arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4] = {{1,2,3,2},{5,4,3,1},{0,0,0,2}};

    //take input as row///
    for (int i=0; i<3; i++){
        for(int j=0;j<3; j++){
            cin>>matrix[i][j];
        }
    }
    // vector<int> ans = spiralOrder(matrix);
    rotate(matrix);
    
    // for(int i:ans){
    //     cout<<i<<" ";
    // }

    // int target;
    // cout<<"Enter number you want to find: ";
    // cin>>target;

    // bool ans = searchMatrix(matrix, target);

    // bool ans2 = searchMatrix2(matrix, target);

    // cout<<ans2;

    

    // lar_row_sum(arr,3,3);
    // printWave(arr,3,3);
    

    // printSum(arr,3,4);

    //take input as col///
    // for (int i=0; i<4; i++){
    //     for(int j=0;j<3; j++){
    //         cin>>arr[j][i];
    //     }
    // }

    //print for column///
    // for (int i=0; i<3; i++){
    //     for(int j=0;j<4; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
//    print for row///////
    // for (int i=0; i<3; i++){
    //     for(int j=0;j<3; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    

    // cout<<"enter the element to search: ";
    // int target;
    // cin>>target;

    // if(isPresent(arr,target,3,4)){
    //     cout<<"Found"<<endl;
    // }
    // else{
    //     cout<<"Not found";
    // }

    return 0;
}