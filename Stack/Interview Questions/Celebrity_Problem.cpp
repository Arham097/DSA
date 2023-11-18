#include<vector>
#include<stack>
class Solution 
{   private:
    bool knows(vector<vector<int> >& M, int a, int b){
        if (M[a][b]==1){
            return true;
        }
        else{
            return false;
        }
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        // Step 1: Push all elements in a stack
        for(int i=0; i<n; i++){
            s.push(i);
        }
        // Step 2: Find the celebrity
        while(s.size()>1){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        
        // Step 3: Verify the element is celebrity or not
        int ans = s.top();
        
        int zeroCount= 0;
        for( int i=0; i<n; i++){
            if(M[ans][i]==0){
                zeroCount++;
            }
        }
        if(zeroCount!=n){
            return -1;
        }
        
        int oneCount= 0;
        for( int i=0; i<n; i++){
            if(M[i][ans]==1){
                oneCount++;
            }
        }
        if(oneCount!=n-1){
            return -1;
        }
        
        return ans;
    }
};