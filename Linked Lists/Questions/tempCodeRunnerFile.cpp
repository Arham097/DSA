Node* sort(Node* head){
    int countZero = 0,countOne = 0,countTwo = 0;

    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==0) countZero++;
        else if (temp->data==1) countOne++;
        else countTwo++;

        temp = temp->next;
    }

    temp = head;
    while(temp!=NULL){
        if(countZero!=0){
            temp->data = 0;
            countZero--;
        }
        else if(countOne!=0){
            temp->data = 1;
            countOne--;
        }
        else if(countTwo!=0){
            temp->data = 2;
            countTwo--;
        }
        temp = temp->next;
    }
    return head;
}
