 //https://www.interviewbit.com/problems/merge-two-sorted-lists/
listnode* mergeTwoLists(listnode* A, listnode* B) 
{
    listnode *ptr=A;
    listnode *ptr1=B;
    listnode *temp;
    if(A==NULL)
    {
        return B;
    }
    if(B == NULL)
    {
        return A;
    }
    if(A->val<B->val)
    {
        temp=A;
        ptr=ptr->next;
    }
    else
    {
        temp=B;
        ptr1=ptr1->next;
    }
    while(ptr && ptr1)
    {
        if(ptr->val<ptr1->val )
        {
            temp->next=ptr;
            temp=ptr;
            ptr=ptr->next;
        }
        else 
        {
           temp->next=ptr1;
            temp=ptr1; 
            ptr1=ptr1->next;
        }
    }
    if(ptr)
    {
        temp->next=ptr;
    }
    else
    {
        temp->next=ptr1;
    }
    if(A->val<B->val)
    
    return A;
    else
    return B;
}