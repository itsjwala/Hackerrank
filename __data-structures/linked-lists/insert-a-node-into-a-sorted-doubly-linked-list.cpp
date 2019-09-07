

// Complete the sortedInsert function below.

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
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

    DoublyLinkedListNode * temp,*prev;
    prev = temp = head;

    for( ; temp!=NULL && data > temp->data ;){
        prev = temp;
        temp = temp->next;
    }

    DoublyLinkedListNode * newNode = new DoublyLinkedListNode(data);

    if(prev == temp){
        newNode->next = temp;
        temp->prev= newNode;
        return newNode;
    }

    prev->next = newNode;
    newNode->prev = prev;

    newNode->next = temp;
    if(temp)
        temp->prev = newNode;

    return head;




}


