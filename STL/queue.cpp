 #include<iostream>
 #include<queue>
using namespace std;

int main(){
   
   queue<string> q;

    q.push("Syed");
    q.push("Arham");
    q.push("Hasan");

    cout<<"Size before pop: "<<q.size()<<endl;

    cout<<"First Element->"<<q.front()<<endl;

    q.pop();

    cout<<"First Element->"<<q.front()<<endl;

    cout<<"Size after pop : "<<q.size()<<endl;

    cout<<"Empty or not -> "<<q.empty()<<endl;
    return 0; 
}