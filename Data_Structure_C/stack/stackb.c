#include<stdio.h>
#include "stackf.h"
int change(int a[],int *t,int e,int i);
int main()
{
int n=3;
int s[n],top =0;
int x;
int h;
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



printf("1 = pop:\n");
printf("2 =  peep:\n");
printf("3 = change:\n");
printf("enter operation:\n");
scanf("%d",&h);

switch(h)
{
    case 1:
    {
        while(1)
 {   int p = pop(s,&top);
     if(p!=0)
     {
      
       printf("%d",p);  
     }
     else
     {
         break;
     }
     
 }
 break;
    }
    case 2:
    {
        printf("enter element index that you want to find:");
        int i = 0;
        scanf("%d",&i);
        int d = peep(s,&top,i);
        printf("%d",d); \
        break;
    }
    case 3:
    {
       printf("enter element index that you want to change:");
       int j = 0;
       scanf("%d",&j);
       printf("enter value:");
       int k =0;
       scanf("%d",&k);
       int f = change(s,&top,j,k);
       printf("changed:%d",f); 
       break;
    }
    default:
    {
         printf("not valid");
         break;
    }
  
}
 
}


