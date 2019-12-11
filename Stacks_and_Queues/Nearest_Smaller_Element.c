//https://www.interviewbit.com/problems/nearest-smaller-element/
struct Stack1 
{
    int data;
    struct Stack1 *next;
};
typedef struct Stack1 stack;
void push(stack **s,int data)
{
    stack *new1=(stack*)malloc(sizeof(stack));
    new1->data=data;
    new1->next=*s;
    *s=new1;
}
void pop(stack **s)
{
    *s=(*s)->next;
}
int poll(stack **s)
{
    int d=(*s)->data;
    *s=(*s)->next;
    return d;
}
int top(stack **s)
{
    return (*s)->data;
}
int empty(stack **s)
{
    if((*s)==NULL)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int* prevSmaller(int* A, int n1, int *len1) {
    *len1=n1;
    stack *s=(stack *)malloc(sizeof(stack));
    push(&s,-1);
    int *a=(int *)malloc(sizeof(int )*n1);
    int i=0,j=0;
    for(i=0;i<n1;i++)
    {
        if(top(&s)<A[i])
        {
            a[j++]=top(&s);
           
        }
        else
        {
            while(top(&s)>=A[i])
            {
                pop(&s);
            }
            a[j++]=top(&s);
        }
        push(&s,A[i]);
    }
    return a;
}
