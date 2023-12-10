#include<iostream>
using namespace std;

class kQueues{
    public:
        int n;
        int k;
        int freespot;
        int* front;
        int* rear;
        int* arr;
        int* next;
    kQueues(int n, int k){
        this->n = n;
        this->k = k;
        freespot = 0;
        front = new int[k];
        rear = new int[k];
        for(int i=0; i<k; i++){
            front[i] = -1;
            rear [i] = -1;
        }
        next = new int[n];
        for(int i=0; i<n; i++){
            next[i] = i+1;
        }
        next[n-1] = -1;
        arr  = new int[n];
    }

    void  enqueue(int data, int qn){
        // check overflow 
        if(freespot==-1){ 
            cout<<"Queue Overlfow"<<endl;
            return ;
        }
        //find index
        int index = freespot;

        //update freespot
        freespot = next[index];

        //check for first element
        if(front[qn-1] == -1){
            front[qn-1] = index;
        }
        //Map the new element with prev element 
        else{
            next[rear[qn-1]] = index;
        }
        // update next
        next[index] = -1;

        //Update rear
        rear[qn-1] = index;

        //inset element
        arr[index] = data;

    }

    int dequeue(int qn){
        //check underflow
        if(front[qn-1]==-1){
            cout<<"Queue underlow"<<endl;
            return -1;
        }
        // find index to pop
        int index = front[qn-1];

        // update front
        front[qn-1] =  next[index];

        // Manage freeSlots
        next[index] = freespot;
        freespot = index;

        return arr[index];

    }
};

int main(){

    kQueues q(10,3);
    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(20,2);
    q.enqueue(25,1);

    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;

    return 0;
}