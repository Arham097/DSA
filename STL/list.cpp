 #include<iostream>
 #include<list>
using namespace std;

int main(){
   
    list<int> l;

    list <int> n(5,100);

    
    for (int i:n){
        cout<<i<<" ";
    }


    l.push_back(1);
    l.push_front(2);

    for (int i:l){
        cout<<i<<" ";
    }

    // d.pop_back();
    // d.pop_front();
    cout<<endl;

    
    // for (int i:d){
    //     cout<<i<<" ";
    // }
    cout<<endl;
    cout<<"Empty or not->  "<<l.empty()<<endl;

    cout<<"First Elemrnt->"<<l.front()<<endl;
    cout<<"Last Element->"<<l.back()<<endl;

    cout<<"before erase->"<<l.size()<<endl;
    l.erase(l.begin());
    cout<<"after erase->"<<l.size()<<endl;
    
    return 0; 
}