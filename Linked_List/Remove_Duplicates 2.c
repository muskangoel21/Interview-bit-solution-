//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list-ii/
 listnode* deleteDuplicates(listnode* A) {
    listnode *prev=NULL;
    listnode *temp=A;
    int flag=0;
    while(temp!=NULL && temp->next!=NULL)
    {
        while(temp->next!=NULL && temp->val==temp->next->val)
        {
            temp->next=temp->next->next;
            flag=1;
        }
        if(flag==1)
        {
            if(prev==NULL)
            {
              A=temp->next;
              temp=temp->next;
              flag=0;
            }
            else
            {
              prev->next=temp->next;
              temp=temp->next;
              flag=0;
            }
        }
        else
        {
            prev=temp;
            temp=temp->next;
        }
    }
    return A;
 }
 
 