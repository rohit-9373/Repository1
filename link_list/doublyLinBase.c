#include<stdio.h>  
#include<stdlib.h>  

struct node  
{  
    int data;  
    struct node *next;  
    struct node *prev;  
};  
struct node *head;  

void insert(int item)  
{  
   
   struct node *ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
      
      
   if(head==NULL)  
   {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=item;  
       head=ptr;  
   }  
   else   
   {  
       ptr->data=item;  
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;  
       head=ptr;  
   }  
}  
     
}  
void main ()  
{  
    int temp;
    for(int i=0;i<5;i++)
    {
        printf("enter element %d:",i);
        scanf("%d",&temp);
        insert(temp);
    }
    show(head);
} 

void show(struct node* node) {
  struct Node* last;

  while (node != NULL) {
    printf("%d ", node->data);
    last = node;
    node = node->next;
  }
  if (node == NULL)
    printf("NULL\n");
}

