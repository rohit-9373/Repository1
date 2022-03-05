#include<stdio.h>

int main()
{
    int len1;
    int len2;

    printf("enter size of array 1:");
    scanf("%d",&len1);
    int a[len1];
    printf("enter elements:");
    for(int i=0;i<len1;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("enter size of array 2:");
    scanf("%d",&len2);
    int b[len2];
    for(int i=0;i<len2;i++)
    {
       scanf("%d",&b[i]);
    }
    printf("your array 1:");
    int c[len1+len2];
    for(int i=0;i<len1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("your array 2:");
    for(int i=0;i<len2;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    int i,j;
    for(i = 0; i < len1+len2; i++)
  	{
      	c[i] = a[i];
  	}
 	for(i = 0,j = len1; j < len1+len2 && i < len2; i++, j++)
  	{
  		c[j] = b[i];
  	}
 	printf("\n c[%d] Array Elements After Merging \n", len1+len2); 
 	for(i = 0; i < len1+len2; i++)
  	{
    	printf(" %d \t ",c[i]);
  	}
  
   for (i = 0; i < len1+len2; ++i){
      for (j = i + 1; j < len1+len2; ++j){
         if (c[i] > c[j]){
            int temp = c[i];
            c[i] = c[j];
            c[j] = temp;
         }
      }
   }
    printf("\n");
    printf("array a:");
    for(i=0;i<len1;i++)
    {
        a[i] = c[i];
        printf("%d  ",a[i]);
    }
    printf("\n");
    printf("array b:");
    for(i=len1;i<len1+len2;i++)
    {
        b[i] = c[i];
        printf("%d  ",b[i]);
    }
}