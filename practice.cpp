// #include<iostream>
// #include<vector>
// using namespace std;

// void print(int* arr, int n){
//     for(int i=0; i<n ; i++){
//         cout<<arr[i]<< " ";
//     }
// }
// // void selSort(int* arr, int n){

// //     for(int i =0; i<n-1; i++){
// //         int minIndex =i;
// //         for(int j=i+1; j<n; j++){
// //             if(arr[j]<arr[minIndex]){
// //                 minIndex = j;
// //             }
// //         }
// //         swap(arr[i], arr[minIndex]);
// //     }
// // }


// // void bubbSort(int* arr, int n){
// //     for(int i=1; i<n;i++){
// //         for(int j=0; j<n-i; j++){
// //             if(arr[j]>arr[j+1]){
// //                 swap(arr[j],arr[j+1]);
// //             }
// //         }
// //     }
// // }

// // void insSort(int* arr, int n){
// //     for(int i =1; i<n; i++){
// //         int temp =arr[i];
// //         int j=i-1;
// //         for(; j>=0; j--){
// //             if(arr[j]>temp){
// //                 arr[j+1] = arr[j];
// //             }
// //             else{
// //                 break;
// //             }
// //         }
// //         arr[j+1] = temp;
// //     }
// // }

// void merge(int* arr, int s, int e){
//     int mid = s+ (e-s)/2;

//     int len1 = mid-s+1;
//     int len2 = e-mid;

//     int* first = new int[len1];
//     int* second = new int[len2];

//     int mainArrayIndex = s;

//     for(int i= 0 ; i<len1; i++){
//         first[i] = arr[mainArrayIndex++];
//     } 

//     for(int i=0; i<len2; i++){
//         second[i] = arr[mainArrayIndex++];
//     }

//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = s;

//     while(index1<len1 && index2<len2){
//         if(first[index1]<second[index2]){
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else{
//              arr[mainArrayIndex++] = second[index2++];
//         }
//     }
//     while(index1<len1){
//         arr[mainArrayIndex++] = first[index1++];
//     }
//     while(index2<len2){
//         arr[mainArrayIndex++] = second[index2++];
//     }

//     delete [] first;
//     delete [] second;
// }

// void mergeSort(int* arr, int s, int e){

//     if(s>=e) return;

//     int mid = s + (e-s)/2;
//     mergeSort(arr,s,mid);
//     mergeSort(arr,mid+1,e);

//     merge(arr,s,e);
// }


// // void sub(string s, int index, string output,vector<string>& ans){


// //     if(index>=s.length()){
// //         if(output.length()>0){
// //             ans.push_back(output);
// //         }
// //         return;
// //     }

// //     //exclude
// //     sub(s,index+1,output,ans);

// //     //include
// //     int element = s[index];
// //     output.push_back(element);
// //     sub(s,index+1,output,ans);

// // }

//     // int countPrimes(int n) {
//     //     int cnt=0;
//     //     vector<bool> prime(n+1, true);

//     //     prime[0]=prime[1] = false;

//     //     for(int i=2; i<n; i++){

//     //         if(prime[i]){
//     //             cnt++;
//     //             for(int j=2*i; j<n; j=j+i){
//     //                 prime[j] = false;
//     //             }
//     //         }
//     //     }
        
//     //     return cnt;
//     // }

// int partition(int *arr, int s, int e){
//     int count = 0;
//     int pivot = arr[s];
//     for(int i=s+1; i<=e; i++){
//         if(arr[i]<=pivot) {
//             count++;
//     }
//     }
//     int pivotIndex = s +count; 
//     swap(arr[pivotIndex],arr[s]);
//     int i = s, j = e; 
//     while(i<pivotIndex && j>pivotIndex){
//         while(arr[i]<=pivot){
//             i++;
//         }
//         while(arr[j]>pivot){
//             j--;
//         }
//         if(i<pivotIndex && j>pivotIndex){
//             swap(arr[i], arr[j]);
//         }        
        
//     }
//     return pivotIndex;
// }


// void quickSOrt(int* arr, int s, int e){

//     if(s>=e) return ;

//     int p = partition(arr,s,e);

//     quickSOrt(arr,s,p-1);
//     quickSOrt(arr,p+1,e);
// }



// int main(){
//     // int n;
//     // cin>>n;
//     // cout<<countPrimes(n);

//     // int arr[] = {2,3,4,6,8};
//     // bool isSorted = true;
//     // int i = 0;
//     // while(i<5){
//     //     if(arr[i]>arr[i+1]){
//     //         isSorted = false;
//     //     }
//     //     i++;
//     // }
//     // cout<<isSorted<<endl;

//     // int a = 2;
//     // int b = 30;

//     // int ans =1;

//     // while(b>0){
//     //     if(b&1){
//     //         ans = ans *a;
//     //     }
//     //     a = a*a;
//     //     b= b>>1; 
//     // }
//     // cout<<ans;

//     // string s = "abc";
//     // string output = "";
//     // int index= 0;
//     // vector<string> ans;
//     // sub(s,index,output,ans);

//     // for(string s : ans){
//     //     cout<<s <<" ";
//     // }


//     int arr[5] = {0,1,6,5,3};
//     int n = 5;

//     // selSort(arr,n);

//     // bubbSort(arr,n);

//     // insSort(arr,n);

//     // mergeSort(arr,0,n-1);
//     quickSOrt(arr,0,n-1);


//     print(arr,n);

//    return 0; 
// }

#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory free for : "<<value<<endl;
    }

};
void insertAtHead(Node*&head, int d){

    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node*& tail, int d){
    
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtMiddle(Node*& tail, Node*& head, int position, int d){
    
    if(position==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* node2 = new Node(d);
    node2->next = temp->next;
    temp->next = node2;   
}

void deleteNode(int position, Node*& head, Node* &tail){

    //deleting first or start node
    if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        //memory free for start node;
        delete temp;
    }
    else{
        //deleting any middle or last node

        Node* curr = head;
        Node* prev = NULL;

        int cnt =1;

        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        if(prev->next ==NULL){
            tail = prev;
        }



    }
}

void print(Node*& head){
    Node* temp = head;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,15);
    print(head);

    insertAtHead(head,11);
    print(head);

    insertAtTail(tail,20);
    print(head);

    insertAtMiddle(tail,head, 5, 99);
    print(head);

    deleteNode(5,head,tail);
    print(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<< tail->data<<endl;




    return 0;
}