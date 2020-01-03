//https://www.interviewbit.com/problems/add-two-numbers-as-lists/
listnode* addTwoNumbers(listnode* A, listnode* B) {
    int carry=0;
    listnode *head=NULL, *prev;
    while (A || B || carry) {
        int val;
        val = carry;
        if (A) {
            val += A->val;
            A = A->next;
        }
        if (B) {
            val += B->val;
            B = B->next;
        }
        if (val > 9) {
            val -= 10;
            carry = 1;
        } 
        else 
        {
            carry = 0;
        }
        listnode *n = (listnode *)malloc(sizeof(listnode ));
        n->val=val;
        n->next=NULL;
        if (!head)
        {
            head = n;
            prev = head;
        } 
        else
        {
            prev->next = n;
            prev = n;
        }
    }
    return head;
}