#include<iostream>
using namespace std;

bool palindrome(string str,int i, int j){

    //base case
    if (i>j) return true;

    if(str[i]!=str[j]) return false;

    else{

        //recursie call
        return palindrome(str,i+1,j-1);
       
    }

}


int main(){
    string word = "baab";

    bool ans = palindrome(word,0,word.length()-1);

    if(ans){
        cout<<"It is a plaindrome"<<endl;
    }
    else{
        cout<<"It is not a plaindrome"<<endl;
    }

    

}
