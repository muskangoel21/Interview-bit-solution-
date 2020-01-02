//https://www.interviewbit.com/problems/reorder-list/
listnode* reorderList(listnode* A) {
    listnode *curr=A;
    if(A==NULL || A->next==NULL || A->next->next==NULL)
        return A;
    int count=0;
    while(curr)
    {
        count++;
        curr=curr->next;
    }
    count=(count+1)/2;
    curr=A;
    while(curr&&count-1)
    {
        curr=curr->next;
        count--;
    }
    
    listnode *temp=curr->next;
    curr->next=NULL;
    curr=A;
    listnode *prev=NULL;
    listnode *curr1=temp;
    listnode *next;
    while(curr1)
    {
        next=curr1->next;
        curr1->next=prev;
        prev=curr1;
        curr1=next;
    }
    temp=prev;
    listnode *next1;
    while(curr&&curr->next)
    {
        next=curr->next;
        curr->next=temp;
        next1=temp->next;
        curr=curr->next;
        prev=curr;
        curr->next=next;
        curr=curr->next;
        temp=next1;
    }
    if(temp!=NULL)
        prev->next->next=temp;
    return A;
}
