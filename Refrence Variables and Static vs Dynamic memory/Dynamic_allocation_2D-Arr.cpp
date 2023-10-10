#include<iostream>
using namespace std;


int main(){

    //for row and column (same)
    /*int n;
    cin>>n;

    int** arr = new int*[n];

    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    //for row and column (different)
    /*int row;
    cin>>row;
    int col;
    cin>>col;


    int** arr = new int*[row];

    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing memory
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            delete [] arr[i];
        }
    }
    delete [] arr;
    */

   //Creating Jagged Array////

   int row1[] = {1,2,3,4};
   int row2[] = {4,5};
   int row3[] = {7,8,9};

   int* jagged[] = {row1,row2,row3};
   int size[] = {4,2,3};

   for(int i=0; i<3; i++){
    int* ptr = jagged[i];
    for(int j=0; j<size[i]; j++){
        cout<< *(ptr+j)<<" ";
    }
    cout<<endl;
   } 

    return 0;
}