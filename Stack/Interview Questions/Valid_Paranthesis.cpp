#include<iostream>
#include<stack>
using namespace std;
bool valid(string s){
        stack<char>S;

    for(char c: s){
        if(c=='('|| c=='{'|| c=='['){
            S.push(c);
        }
        else if(c==')'|| c=='}'|| c==']'){
            if(S.empty()){
                return false;
            }
            else{
                if(!S.empty()){

                    char top = S.top();
                    if((c==')'&& top=='(')||(c=='}'&& top=='{')||(c==']'&& top=='[')){
                        S.pop();
                    }
                    else {
                        return false;
                    }
                }
                else{
                     return false;
                }
            }
        }
    }
return S.empty();
}
int main(){

    string s = "{()}";
    if(valid(s)){
        cout<<"valid"<<endl;
    }
    else{
        cout<<"Not valid"<<endl;
    }
    return 0;
}