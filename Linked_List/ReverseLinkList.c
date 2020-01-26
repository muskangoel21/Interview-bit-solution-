//https://www.interviewbit.com/problems/reverse-link-list-ii/
listnode* reverseBetween(listnode* A, int B, int C) 
{
    listnode*curr=A;
    listnode*prev=NULL;
    listnode*next=NULL;
    listnode *temp=A;
    listnode *temp1=A;
    int count =1,flag=0;
    if(B==C)
    {
        return A;
    }
    while(curr!=NULL)
    {
      if(count <B)
      {
          temp=curr;
          curr=curr->next;
          temp1=curr;
      }
      else if(count<=C)
    {
        
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
    }
    else
    {
        if(B==1)
         {
           A=prev;
           break;
            }
            else
            {
                temp->next=prev;
                temp1->next=curr;
                flag=1;
                break;
            }
         }
      
      count++;
      
    }
    if(B==1)
    {
     A=prev;   
    }
    if(flag==0)
    {
        temp->next=prev;
        temp1->next=curr;
    }
    
     
    return A;
}
