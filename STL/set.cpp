 #include<iostream>
 #include<set>
using namespace std;

int main(){
   
   set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    // set<int>::iterator iter;
    // for(iter = s.begin(); iter!=s.end(); iter++){
    //     cout<<*iter<<' ';
    // }
    ////or/////
    s.erase(1);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"5 is present or not -> "<< s.count(5)<<endl;

    auto itr = s.find(5);
    cout<<*itr<<endl;

    for(auto it = itr; it!=s.end(); it++){
        cout<<*it<<"  ";
    }
    return 0; 
}