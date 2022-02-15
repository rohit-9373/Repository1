#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int top =0;
    int ca = 0;
    int cb =0;
    printf("enter string:");
    scanf("%s",a);
     for(int i =0;i<strlen(a);i++)
     {
         if(a[i] == 'a')
         {
             ca++;
             top++;
         }
         else if(a[i] == 'b')
         {
             cb++;
             top++;
         }
     }

     if(ca == cb)
     {
         printf("valid");
     }
     else
     {
         printf("invalid");
     }
}
