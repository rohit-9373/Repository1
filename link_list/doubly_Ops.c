#include<stdio.h>  
#include<stdlib.h>  
void insert(int);  
void delt();  
struct node  
{  
    int data;  
    struct node *next;  
    struct node *prev;  
};  
struct node *head;  
void main ()  
{  
   int temp;  
        for(int i=0;i<5;i++)
        {
         printf("\nEnter element\n");  
         scanf("%d",&temp);  
         insert(temp); 
         printf("inserted");
        }
        printf("\nlist:");
        show(head);
        delt(); 
        delt(); 
        printf("\nafter delete:");
        show(head);
        
}  
void insert(int item)  
{  
   
   struct node *ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW\n");  
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
void delt()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW\n");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("\nNode Deleted\n");  
    }  
    else  
    {  
        ptr = head;  
        head = head -> next;  
        head -> prev = NULL;  
        free(ptr);  
        printf("\ndeleted\n");  
    }  
}
void show(struct node* node) {
  struct node* last;

  while (node != NULL) {
    printf("%d ", node->data);
    last = node;
    node = node->next;
  }
  if (node == NULL)
    printf("NULL\n");
}
