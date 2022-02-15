#include<stdio.h>

int push(int [],int *t,int,int);
int pop(int[],int *,int);
int main()
{
int n=3;
int s[n],top =0;
int x;
 while(1)
 {
      printf("enter element:\n");
      scanf("%d",&x);
      if(push(s,&top,x,n)==0)
      {
          break;
      }
      else
      {
          printf("pushed\n");
      }
 }
 
 for(int i=n+1;i>0;i--)
 {
     //printf("%d",s[i]);
     pop(s,&top,n);
 }
 
}

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

int pop(int a[],int *t,int n)
{
   if(*t>0)
    {
        *t = *t-1;
        printf("removed:%d\n", a[*t]);
        return 1;
    }
    else
    {
        printf("under flow");
        printf("\n");
        return 0;
    }
}
