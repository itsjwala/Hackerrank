

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {

    if(position == 0){

    }

    SinglyLinkedListNode * temp,*prev;

    temp = head;
    prev= head;


    for(int i=0; i<position  ; i++){
        prev = temp;
        temp = temp->next;
    }
    
    SinglyLinkedListNode * newNode = new SinglyLinkedListNode(data);

    newNode->next = temp;
    if(prev == temp)
        return newNode;
    
    prev->next = newNode;
     
    return head;
}


