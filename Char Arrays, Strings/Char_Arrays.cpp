#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;


//FInd the permutation of string//////
bool check(int a[26], int b[26]){
    for(int i=0; i<26; i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

bool Permutaion(string s1, string s2){
    int count1[26] = {0};
    for(int i=0; i<s1.length(); i++){
        int index = s1[i] -'a';
        count1[index]++;
    }
    int i=0;
    int windowSize = s1.length();
    int count2[26] = {0};

    while(i<windowSize && i<s2.length()){
        int index = s1[i] -'a';
        count2[index]++;
        i++;
    }
    if(check(count1, count2)) return true;

    while(i<s2.length()){
        int newChar = s2[i]-'a';
        count2[newChar]++;

        int oldChar = s2[i] - 'a';
        count2[oldChar]++;

        i++;
        if(check(count1, count2)) return true;
        
    }
    return false;
}
//Compressed arrays/////////////////////

string compressed(char s[]){
    //Approach 1///////////

    // int arr[26] = {0};
    // string temp;
    // for(int i=0; i<s.length(); i++){
    //     char ch = s[i];
    //     int index = ch - 'a';
    //     arr[index]++;
    // }
    // for(int i=0; i<26; i++){
    //     if(arr[i]!=0 &&arr[i]!=1){
    //         char ch = 'a' + i;
    //         temp.push_back(ch);
    //         temp.push_back('0'+ arr[i]);
    //     }
    //     else if(arr[i]==1){
    //         char ch = 'a' + i;
    //         temp.push_back(ch);
    //     }
        
    // }
    // return temp;


    ///Approach 2//////////
    int i=0;
    int ansIndex=0;
    int n = strlen(s);
    while(i<n){
        int j= i+1;
        while(j<n && s[i]==s[j]){
            j++;
        }
        s[ansIndex++] = s[i];
        int count = j-i;
        if(count>1){
            string cnt = to_string(count);
            for(char ch:cnt){
               s[ansIndex++] = ch;
            }
        }
        i=j;
    }
    return s;
}

//Remove adjacent elements///////////////
string remove_adjacent(string s){
    string result ;
    for(char ch:s){
        if(!result.empty() && result.back()==ch){
            result.pop_back();
        }
        else{
            result.push_back(ch);
        }
    }
    return result;
}

// Remove the part (substrings) from the strings ////////////////////
string remove_sub_string(string s, string part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

string replaceSpaces(string s){

    // With space complexity O(n) 

    // string temp = " ";
    // for(int i=0; i<s.length(); i++){
    //     if(s[i]==' '){
    //         temp.push_back('@');
    //         temp.push_back('4');
    //         temp.push_back('0');
    //     }
    //     else{
    //         temp.push_back(s[i]);
    //     }
    // }
    // return temp;

    // With space complexity O(1) 

    string replacement = "@40";
    size_t found = s.find(' ');

    while(found!=string::npos){
        s.replace(found,1,replacement);
        found = s.find(' ', found+replacement.length());
    }
    return s;
}

///Identify the greater occurence of letter in a word (lowercase)

char getGreaterOccur(string s){
    int arr[26] = {0};
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int num = 0;
        num = ch -'a';
        arr[num]++;
    }
    int maxi = -1, ans =0;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;
 }

//Reversed the words in a char string////////
void reversed_char_array(char word[]){
    int length = strlen(word);
    int start =0;   

    //reverse entire string///////
    reverse(word, word + length);

    //reverse individual words/////
    for(int i=0; i<length; i++){
        if(word[i]==' '){
            reverse(word+start, word +i);
            start = i+1;
        }
    }
    reverse(word+start, word+length);
 }

//Converted to lower case//////////////////
char toLowerCase(char ch){
    if((ch>='a'&& ch<='z')|| (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

//Check Palindrome///////////

bool palindrome(char name[], int n){
    int s = 0;
    int e =n-1;
    while(s<=e){
        if(toLowerCase(name[s])!=toLowerCase(name[e])){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

//reverse ////////////////////
void reversed(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
    for(char i = 0; i<n; i++){
        cout<<name[i]<<" ";
    }
}

//getlength///////////////////

int getLength(char name[]){
    int count =0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    // char name[20];
    // cout<<"Enter your name: ";
    // cin>>name;
    // name[2] = '\0';
    
    // cout<<"Your name is: ";
    // cout<<name<<endl;

    // int length = getLength(name);
    // cout<<"length: "<<length<<endl;

    // cout<<"reversed string: ";
    // reverse(name,length);
    
    
    // char name[20];
    // cout<<"Enter your name: ";
    // cin>>name;
    // int length = getLength(name);
    // cout<<"is it Palindrome? -> "<<palindrome(name,length);


    // char word[25] = "My name is Arham";

    // reversed_char_array(word);
    // cout<<"word-> "<<word<<endl;


    // string s;
    // cout<<"Enter word (in lowercase): ";
    // cin>> s;
    // cout<<"The letter occured most: "<<getGreaterOccur(s);


    // string b = "Hello my name is Arham";
    // cout<<"After replacing: "<<replaceSpaces(b);

    
    
    // string occur = "daabcbabcddabc";
    // string part = "abc";
    // cout<<"Remaining string after removing "<<part<<" is: "<<remove_sub_string(occur,part)<<endl;


    // string adjacent= "abbaca";
    // cout<<"Remaining element-> "<<remove_adjacent(adjacent);


    // char comp[20] = "aabcc";
    // cout<<"Answer is-> "<<compressed(comp);

    string s1 = "ab";
    string s2 = "eidbaoo";

    cout<<"Permutation is found: "<<Permutaion(s1,s2);

    
    
 return 0;
}