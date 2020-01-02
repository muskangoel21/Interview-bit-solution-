 //https://www.interviewbit.com/problems/k-reverse-linked-list/
listnode* reverseList(listnode* A, int B) 
{
    listnode *curr=A,*temp=NULL,*next=NULL;
    int count=0;
    while(curr!=NULL && count<B) 
    {
      next=curr->next;
      curr->next=temp;
      temp=curr;
      curr=next;
      count++;
    }
    if(next!=NULL)
    {
        A->next=reverseList(next,B);
    }
    return temp;
}