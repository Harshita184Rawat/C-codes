//A C Program to Display Fibonacci Sequence.
void main()
{
    int i,n=12,c,d,e;
    c=1;
    d=1;
    printf(" %d  %d " ,c , d);
    for (i=3;i<=n;i++)
    {
        e=c+d;
        printf(" %d ", e);
        c=d;
        d=e;
    }
}

