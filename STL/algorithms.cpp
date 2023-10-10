 #include<iostream>
 #include<vector>
 #include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);


    ////Binary Search///////////
    cout<<"Finding 6 -> "<<binary_search(v.begin(),v.end(),6)<<endl;
   
    //Lower Bound///////////////////////
    cout<<"lower-bound -> "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    
    //Upper Bound///////////////////
    cout<<"upper-bound -> "<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;

    
    ////Max and MIn//////////////////
    int a = 3;
    int b = 5;

    cout<<"max ->"<<max(a,b);

    cout<<"min ->"<<min(a,b);

    ///swap//////////////////
    swap(a,b);
    cout<<endl;
    cout<<"(a,b) -> ("<<a<<","<<b<<")"<<endl;;

    ///revered///////////////////
    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<<"revered string -> "<<abcd;

    ///rotate//////////////////
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"after rotate:"<<endl;

    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    ///sort/////////////////
    sort(v.begin(),v.end());
    
    for(int i: v){
        cout<<i<<" ";
    }
    

    return 0; 
}