//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list/
listnode* deleteDuplicates(listnode* A) {
    listnode *ptr=A;
    while(ptr->next!=NULL)
    {
        if(ptr->val==ptr->next->val)
        {
            ptr->next=ptr->next->next;
        }
        else
      ptr=ptr->next;
    }
    return A;
}
