

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {

    SinglyLinkedListNode * temp = head;

    while(temp->next!=NULL){
        SinglyLinkedListNode * temp1 = temp->next;

        if(temp->data == temp1->data)
            temp->next = temp1->next;
        else
            temp = temp->next;
    }
    return head;
}


