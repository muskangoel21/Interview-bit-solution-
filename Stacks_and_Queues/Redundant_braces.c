//https://www.interviewbit.com/problems/redundant-braces/
struct stack1
 {
     int data;
     struct stack1 *next;
 };
 typedef struct stack1 stack;
 void push(stack **s,int data)
 {
    stack *new1 = (stack *)malloc(sizeof(stack));
    new1->data = data;
    new1->next = (*s);
    (*s)=new1;   
 }
 void pop(stack **s)
 {
     (*s) = (*s)->next;
 }
 int poll(stack **s)
 {
     int d = (*s)->data;
     (*s) = (*s)->next;
     return d;
 }
 int top(stack **s)
 {
     return (*s)->data;
 }  
 int empty(stack **s)
 {
     if(*s==NULL)
        return 1;
    return 0;
 }
int braces(char* A) 
{
    int i;
    stack *s=(stack *)malloc(sizeof(stack));
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]==')')
        {
          int top = poll(&s);
          int flag=1;
          while(top!='(')
          {
              if(top=='+' || top=='-'||
              top=='*' || top=='/')
              {
                  flag=0;
              }
              top=poll(&s);
             
          }
           if(flag==1)
              {
                  return 1;
              }
        }
        else
        {
            push(&s,A[i]);
        }
    }
    return 0;
}
