//https://www.interviewbit.com/problems/reverse-link-list-ii/
listnode* reverseBetween(listnode* A, int B, int C) 
{
   listnode *ptr=A;
   listnode *p=A;
   listnode *curr=ptr;
   listnode *next;
   listnode *prev=NULL;
   int count=1;
   if(B==C)
   {
       return A;
   }
   while(ptr)
   {
       if(count<B)
       {
           p=ptr;
          ptr=ptr->next; 
          printf("%d ",ptr->val);
       }
       else if(count>=B && count<=C)
       {
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
       }
       else
       {
           p=prev;
           ptr=ptr->next;
       }
       count++;
   }
   return ;
}