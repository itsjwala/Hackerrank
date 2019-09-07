

// Complete the reverse function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {

    DoublyLinkedListNode * temp,*temp1,*prev;
    
    temp = head;

    while(temp){
        temp1 = temp->next;

        swap(temp->prev,temp->next);
        prev = temp;
        temp = temp1;
    }

    return prev;

}


