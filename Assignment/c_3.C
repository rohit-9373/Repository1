#include<stdio.h>

int main()
{
    int a[10] = {1,5,4,8,9,2,0,6,11,7};
    int temp;
    int flag=0;
    printf("enter  number:");
    scanf("%d",&temp);
    for(int i=0;i<10;i++)
    {
        if(i == temp)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }

    if(flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    printf("sequence:");
    for(int i=0;i<10;i++)
    {   
        printf("%d",a[i]);
    }
}