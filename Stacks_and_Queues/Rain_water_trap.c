//https://www.interviewbit.com/problems/rain-water-trapped/
int trap(const int* A, int n1) {
    int max=0,pos,i;
    for(i=0;i<n1;i++)
    {
        if(max<=A[i])
        {
            max=A[i];
            pos=i;
        }
    }
    max=A[0];
    int total=0;
    for(i=0;i<pos;i++)
    {
        if(max-A[i]>0)
        total+=max-A[i];
        if(max>A[i])
        max=max;
        else
        max=A[i];
        //max=max>A[i]?max:A[i];
    }
    max=A[n1-1];
    for(i=n1-1;i>pos;i--)
    {
        if(max-A[i]>0)
            total+=max-A[i];
        max=max>A[i]?max:A[i];
    }
    return total;
}
