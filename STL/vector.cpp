 #include<iostream>
 #include<vector>
using namespace std;

int main(){
    //Initialize vector with size and with any initial valeus//
    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
////////////////////////////////////////////////////////////////

///////////Copy one vector to another/////////////

vector<int> last(a);
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;
////////////////////////////////////////////////////

 /////////////vector and its operations////////////////
    vector<int> v;
    cout<<"capacity->  "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity->  "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity->  "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity->  "<<v.capacity()<<endl;
    cout<<"size->  "<<v.size()<<endl;

    cout<<"Front->  "<<v.front()<<endl;
    cout<<"back->  "<<v.back()<<endl;

    cout<<"before pop->  ";
    for(int i:v){
        cout<<i<<" ";
    }
    v.pop_back();
    cout<<endl;

    cout<<"after pop->  ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"before clear-> "<<v.size()<<endl;
    v.clear();
    cout<<"after clear->  "<<v.size()<<endl;
    
    ///after clear() only size is 0 means elements are removed but memory that allocate to it not becomes 0 it remains to it original size
    cout<<v.capacity();
    return 0; 
}