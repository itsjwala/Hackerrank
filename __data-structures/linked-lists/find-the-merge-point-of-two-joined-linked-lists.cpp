

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode * temp1 = head1;
    SinglyLinkedListNode * temp2 = head2;


    while(temp1!=NULL && temp2!= NULL){
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    
    while(temp1!=NULL){

        temp1 = temp1->next;
        head1 = head1->next;
    }    
    while(temp2!=NULL){
        temp2 = temp2->next;
        head2 = head2->next;
    }

    while(head1!=head2){
        head1 = head1->next;
        head2 = head2->next;
    }

    return head1->data;


}


