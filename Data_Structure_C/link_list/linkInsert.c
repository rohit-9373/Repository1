#include<stdio.h>  

struct node  
{  
    int a;  
    struct node *link;  
};  
struct node *head;  

int main()
{
    int ele;  
    printf("\nEnter element\n");  
    scanf("%d",&ele);
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));  
        
        if(ptr == NULL)  
        {  
            printf("overflow\n");  
        }  
        else  
        {  
            ptr->a = ele;  
            ptr->link = head;  
            head = ptr;  
            printf("\nelement inserted\n");  
        } 
        
        printf("inserted element is:%d",ptr->a);
        printf("\n");
        printf("%p",ptr);
        
    
      
        
}  

