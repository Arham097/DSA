#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    m[1] = "Syed";
    m[2] = "Arham";
    m[3] = "Hasan";

    for(auto i :m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    m.insert({4,"Akhzer"});
   
       for(auto i :m){
        cout<<i. first<<" "<<i.second<<endl;
    }

    cout<<"finding 4 -> "<<m.count(4)<<endl;

    m.erase(4);
    cout<<endl;
    cout<<"After erase 4:"<<endl;

    for(auto i :m){
        cout<<i.first<<" "<<i.second<<endl;
    }

//Element from find index to end/////////
    auto it = m.find(2);
    for(auto iter =it; iter!=m.end(); iter++){
        cout<<iter->first<<endl;
    }
    return 0; 
}