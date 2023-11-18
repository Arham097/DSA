#include<iostream>
#include<stack>
using namespace std;

bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for(char ch: s){
        if(ch=='('|| ch=='+'||ch=='-'||ch=='*'|| ch=='/'){
            st.push(ch);
        }
        else if(ch==')'){
            bool isRedundant= true;
            while(st.top()!= '('){
                char top = st.top();
                if(top=='+'||top=='-'||top=='*'|| top=='/'){
                    isRedundant = false;
                }
                st.pop();
            }
            if (isRedundant==true){
                return true;
            }
            st.pop();
        }
    }
    return false;
}
int main(){

    string str = "((a*b) +c)";
    if(findRedundantBrackets(str)){
        cout<<"The string has redundant brackets"<<endl;
    }
    else{
        cout<<"The string has not redundant brackets"<<endl;
    }
    return 0;
}