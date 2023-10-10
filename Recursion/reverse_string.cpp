#include<iostream>
using namespace std;

//Approach 1
// void reverse(string& str, int i){

//     int n= str.length();
//     //base case
//     if(i>=n/2) return;

//     swap(str[i], str[n-i-1]);
//     i++;
//     //recursive call
//     reverse(str,i);

// }


// int main(){

//    string name = "Arham";
//    reverse(name,0);

//    cout<<name;

// }

//Approach 2
void reverse(string& str, int i, int j){

    //base case
    if(i>j) return;

    swap(str[i], str[j]);
    i++;
    j--;
    //recursive call
    reverse(str,i,j);

}


int main(){

   string name = "Arham";
   reverse(name,0,4);

   cout<<name;

}
