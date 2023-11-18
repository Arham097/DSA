// #include<iostream>
// using namespace std;

// class Queue{
//     public:
//     int *arr;
//     int front;
//     int rear;
//     int size;

//     Queue(int s){
//         size = s;
//         arr = new int[size];
//         front = 0;
//         rear = 0;
//     }

//     // functions
//     bool isEmpty(){
//         if(front ==rear){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     void enqueue(int data){
//         if(rear==size){
//             cout<<"Queue is full"<<endl;
//         }
//         else{
//             arr[rear] = data;
//             rear++;
//         }
//     }
//     int dequeue(){
//         if(front==rear){
//             return -1;
//         }
//         else{
//             int ans = arr[front];
//             arr[front] = -1;
//             front++;
//             if(front==rear){
//                 front= 0;
//                 rear = 0;
//             }
//             return ans;
//         }
//     }
//     int Front(){
//         if(front==rear) return -1;
//         else{
//             return arr[front];
//         }
//     }
//     void display(){
//         for(int i=0; i<rear; i++){
//             if(arr[i]==-1){
//                 continue;
//             } 
                
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };


// int main(){
//     Queue q(10);
//     q.enqueue(5);
//     q.enqueue(10);
//     q.enqueue(15);
//     cout<<q.dequeue()<<endl;

//     cout<< q.Front()<<endl; 

//     q.display();

//     cout<<q.isEmpty();


//     return 0;
// }

