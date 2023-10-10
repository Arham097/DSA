//Pattern 1
// ***
// ***
// ***
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j =1;
//             while (j<=n)
//             {
//                 cout<<"* ";
//                 j++;
//             }
//             cout<<endl;
//             i++;
//         }
    
//     return 0;
// }

// Pattern2
// 111
// 222
// 333
// #include<iostream>
// using namespace std;

// int main(){
//     int n = 3;
//     int i = 1;
//     while(i<=n){
//         int j =1;
//         while(j<=n){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }

// Pattern 3
// 1234
// 1234
// 1234
// 1234

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while (j<=n){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }

// Pattern 4
// 123
// 456
// 789
// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cin>>n;
//     int i =1;
//     int count =1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             count++;
//             j++;            
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// Pattern 5
// *
// **
// ***
// ****
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         int j = 1;
//         while (j<=i)
//         {
//          cout<<"*";
//          j++;  
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// Pattern 6
// 1
// 22
// 333
// 4444
// #include<iostream>
// using namespace std;

// int main(){
//       int n;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         int j = 1;
//         while (j<=i)
//         {
//          cout<<i;
//          j++;  
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// Pattern 7
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     int count =1;
//     while(i<=n){
//         int j =1;
//         while(j<=i){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// Pattern 8
// 1
// 2 3
// 3 4 5
// 4 5 6 7

//  #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col =1; 
//         while(col<=row){
//             cout<<col+row-1;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// Pattern 9
// 1
// 2 1
// 3 2 1

//  #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col =1; 
//         while(col<=row){
//             cout<<row-col+1<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// Pattern 10
// A A A
// B B B 
// C C C 

//  #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col =1; 
//         while(col<=n){
//             char ch = 'A'+row -1;
//             cout<< ch <<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// Pattern 11
// A B C
// A B C 
// A B C 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col =1; 
//         while(col<=n){
//             char ch = 'A'+col -1;
//             cout<< ch<<" " ;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// Pattern 12
// A B C
// D E F
// G H I

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     int number = 0;
//     while(row<=n){
//         int col =1; 
//         while(col<=n){
//             char ch = 'A'+number;
//             cout<< ch<<" " ;
//             number++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

//Pattern 13
// A B C
// B C D
// C D E

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 0;
//     while(row<n){
//         int col =1; 
//         while(col<=n){
//             char ch = 'A'+row +col -1;
//             cout<< ch<<" " ;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

//Pattern 14
// A 
// B B
// C C C

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 0;
//     while(row<n){
//         int col =0; 
//         while(col<=row){
//             char ch = 'A'+row;
//             cout<< ch<<" " ;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

//Pattern 15
// A 
// B C
// D E F
// G H I J

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 0;
//     int num = 0;
//     while(row<n){
//         int col =0; 
//         while(col<=row){
//             char ch = 'A'+num;
//             cout<< ch<<" " ;
//             num++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }


//Pattern 16
// A 
// B C
// C D E
// D E F G

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;  
//     while(row<=n){
//         int col =1; 
//         while(col<=row){
//             char ch = 'A'+row+col-2;
//             cout<< ch<<" " ;      
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

//Pattern 17
// D 
// C C
// B C D
// A B C D

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;  
//     while(row<=n){
//         int col =1; 
//         while(col<=row){
//             char ch = 'A'+n+col-row-1;
//             cout<< ch<<" " ;      
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

//Pattern 18
//    *
//   **
//  ***
// ****
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int space = n-row;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int col = 1;
//         while(col<=row){
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         row++;        
//     }
    
    
//     return 0;
// }

//Pattern 19
// ****
// ***
// **
// *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = n;
//     while(row>=1){
//         int col = 1;
//         while(col<=row){
//             cout<<"*";
//             col++;
//         }
//         int space = n-row;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         cout<<endl;
//         row--;        
//     }
//         return 0;
// }

//Pattern 20
// ****
//  ***
//   **
//    *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = n;
//     while(row>=1){
//         int space = n-row;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int col = 1;
//         while(col<=row){
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         row--;        
//     }
//         return 0;
// }

//Pattern 21
// 1111
//  222
//   33
//    4

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = n;
//     int number = 1;
//     while(row>=1){
//         int space = n-row;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int col = 1;
//         while(col<=row){
//             cout<<number;
//             col++;
//         }
//         number++;
//         cout<<endl;
//         row--;        
//     }
//         return 0;
// }

//Pattern 22
//    1
//   22
//  333
// 4444

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     // int number = 1;
//     while(row<=n){
//         int space = n-row;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int col = 1;
//         while(col<=row){
//             cout<<row;
//             col++;
//         }
//         cout<<endl;
//         row++;        
//     }
//         return 0;
// }

//Pattern 23
// 1234
//  234
//   34
//    4

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = n;
//     int num = 1;
//     while(row>=1){
//         int space = n-row;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int col = 1;
//         while(col<=row){
//             cout<<num+col-1;
//             col++;
//         }
//         num++;
//         cout<<endl;
//         row--;        
//     }
//         return 0;
// }

//Pattern 23
//     1
//    23
//   456
//  78910

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     int num = 1;
//     while(row<=n){
//         int space = n-row;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int col = 1;
//         while(col<=row){
//             cout<<num;
//             num++;
//             col++;
//         }
//         cout<<endl;
//         row++;        
//     }
//         return 0;
// }

//Pattern 24
//     1
//    121
//   12321
//  1234321

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int space = n-row;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int col = 1;
//         while(col<=row){
//             cout<<col;
//             col++;
//         }
//         int colo =1;
//         while(colo<=row-1){
//             cout<<row-colo;
//             colo++;
//         }

//         cout<<endl;
//         row++;        
//     }
//         return 0;
// }

//Pattern 25
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = n;
//     while(row>=1){
//         int star = n-row;
//         int col =1;
//         int start = row;
//         while(start){
//             cout<<start;
//             start++;
//         }
//         while(star){
//             cout<<"*";
//             star--;
//         }
//           }
//           cout<<endl;
//           row--;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = n;
//     while(row>=1){
//         int star = n-row;
//         int star1 = n-row;
//         int col =1;
//         while(col<=row){
//             cout<<col;
//             col++;
//         }
//         while(star){
//             cout<<"*";
//             star--;
//         }
//         while(star1){
//             cout<<"*";
//             star1--;
//         }
//         int start = row;
//         while(start){
//             cout<<start;
//             start--;
//         }
//     cout<<endl;
//     row--;
//     }
//     return 0;
// }