#include <stdio.h>
#include <stdlib.h>
 

struct node
{
    int info;
    struct node* link;
};
 

void show(struct node* head)
{
    struct node* ptr = head;
    while (ptr)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }
}
 

void insert_ele(struct node** head, int info)
{
  
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = info;
    newnode->link = *head;
    *head = newnode;
}
 

struct node* copy(struct node* head)
{
    struct node* current = head;   
    struct node* newList = NULL;    
    struct node* tail = NULL;      
 
    while (current != NULL)
    {
       
        if (newList == NULL)
        {
            newList = (struct node*)malloc(sizeof(struct node));
            newList->info = current->info;
            tail = newList;
        }
        else {
            tail->link = (struct node*)malloc(sizeof(struct node));
            tail = tail->link;
            tail->info = current->info;
            tail->link = NULL;
        }
        current = current->link;
    }
 
    return newList;
}
 
int main(void)
{
    int temp;
    struct node* head = NULL;
 
    
    for (int i = 0; i < 5; i++) {
        printf("enter element %d:",i);
        scanf("%d",&temp);
        insert_ele(&head, temp);
    }
 
   
    struct node* duplicate = copy(head);
 
    printf("duplicate list:");
    show(duplicate);
    printf("\noriginal list:");
    show(head);
 
    return 0;
}
