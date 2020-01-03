//https://www.interviewbit.com/problems/list-cycle/
listnode* detectCycle(listnode* A) 
{
    listnode *fast = A , *slow=A;
    while(fast!=NULL && slow!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast == slow)
        {
            slow=A;
            while(slow !=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return NULL;
}