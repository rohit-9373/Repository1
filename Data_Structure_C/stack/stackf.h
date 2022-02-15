int push(int a[],int *t,int e,int n)
{
    if(*t<n)
    {
        *t = *t+1;
        a[*t] = e;
        printf("top is:%d\n",*t);
        return 1;
    }
    else
    {
        printf("stack overflow");
        printf("\n");
        return 0;
    }
}

int pop(int a[],int *t)
{
   if(*t==0)
    {
       printf("under flow");
       return 0;
    }
    else
    {
        *t = *t-1;
        printf("removed\n");
        return a[*t+1];
    }
}

int peep(int a[],int *t,int e)
{
   if(*t-e+1<=0)
    {
       printf("not exist");
       return 0;
    }
    else
    {
        return a[*t-e+1];
    }
}

int change(int a[],int *t,int e,int i)
{
   if(*t-e+1<=0)
    {
       printf("not exist");
       return 0;
    }
    else
    {
        a[*t-e+1] =i;
        return i;
    }
}
