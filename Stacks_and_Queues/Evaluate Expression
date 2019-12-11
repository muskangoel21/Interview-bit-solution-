 //https://www.interviewbit.com/problems/evaluate-expression/
struct Stack
{
    int data;
    struct Stack *next;
};
typedef struct Stack stack;
void push(stack **s,int data)
{
    stack *new1=(stack *)malloc(sizeof(stack));
    new1->data=data;
    new1->next=*s;
    *s=new1;
}
void pop(stack **s)
{
    (*s)=(*s)->next;
}
int top(stack **s)
{
    return (*s)->data;
}
int poll(stack **s)
{
    int d=(*s)->data;
    (*s)=(*s)->next;
    return d;
}
int empty(stack **s)
{
    if((*s)==NULL)
    {
        return 1;
    }
    else
    return 0;
}
int evalRPN(char** A, int n1) {
   stack *s=(stack *)malloc(sizeof(stack ));
   int i=0;
   for(i=0;i<n1;i++)
   {
      if(isdigit(A[i][0])) 
      {
          push(&s,atoi(A[i]));
      }
      else
      {
          int a=poll(&s);
          int b=poll(&s);
          int c;
          if(A[i][0]=='+')
          {
              c=b+a;
          }
          if(A[i][0]=='-')
          {
              c=b-a;
          }
          if(A[i][0]=='*')
          {
              c=b*a;
          }
          if(A[i][0]=='/')
          {
              c=b/a;
          }
          push(&s,c);
      }
   }
   int r=poll(&s);
   return r;

}
