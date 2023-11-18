// class CircularQueue{
//     public:
//         int *arr;
//         int front;
//         int rare;
//         int size;
//     // Initialize your data structure.
//     CircularQueue(int n){
//         // Write your code here.
//         size = n;
//         arr = new int[size];
//         front =rare =-1;
//     }

//     // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
//     bool enqueue(int value){
//         // to check whether the queue is full or not
//        if((front==0 && rare == size-1)||(rare == (front-1)%(size-1))){
//           return false;
//        }
//        // to insert first element
//        else if(front==-1){
//            rare=front =0;
//        }
//        // to maintain  cyclic nature
//        else if(rare==size-1 && front!=0){
//            rare=0;
//        }
//        // normal flow
//        else{
//            rare++;
//        }
//        arr[rare] = value;
//        return true;
//     }

//     // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
//     int dequeue(){
//         // to check queue is empty or not
//         if(front == -1) {
//             return -1;
//         }
//         int ans = arr[front];
//         arr[front] = -1;

//         //to check there is only one element
//         if(rare==front){
//             rare=front=-1;
//         }
//         // to maintain cyclic nature
//         else if(front==size-1){
//             front = 0 ;
//         }
//         //normal flow
//         else{
//             front++;
//         }
//         return ans;
//     }
// };

class CirQueue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    CirQueue(int s){
        size = s;
        arr = new int[s]; 
        front = rear = -1; 
    }

    bool enqueue(int x){
        if((front==0 && rear==size-1)||(rear == (front-1) % (size-1))){
            return false;
        }
        else if(front==-1){
            rear = front = 0;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear] = x;
        return true;
    }
    int dequeue(){
        if(front==-1){
            return -1;
        }
        int ans = arr[front];
        arr[front]  = -1;
        if(rear==front){
            rear=front=-1;
        }
        else if(front==size-1){
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }
};