#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

void insert_ele(struct node **head, int val)
{
    
    struct node *newNode = malloc(sizeof(struct node));
    newNode->info = val;
    newNode->link = NULL;

   
    if(*head == NULL)
         *head = newNode;
   
    else
    {
        struct node *lastNode = *head;

      
        while(lastNode->link != NULL)
        {
            lastNode = lastNode->link;
        }

       
        lastNode->link = newNode;
    }

}

void del(struct node **head, int key)
{
      
      struct node *temp;

      
      if((*head)->info == key)
      {
          temp = *head;    
          *head = (*head)->link;
          free(temp);
      }
      else
      {
          struct node *current  = *head;
          while(current->link != NULL)
          {
              
              if(current->link->info == key)
              {
                  temp = current->link;
                 
                  current->link = current->link->link;
                  free(temp);
                  break;
              }
             
              else
                  current = current->link;
          }
      }
}

void show(struct node *head)
{
    struct node *temp = head;

   
    while(temp != NULL)
    {
         printf("%d ", temp->info);
         temp = temp->link;
    }
   
}

int main()
{
     struct node *head = NULL;
     int t;
     int d;
      for (int i = 0; i < 5; i++) {
        printf("enter element %d:",i);
        scanf("%d",&t);
        insert_ele(&head,t);
    }
     show(head);
      for (int i = 0; i < 2; i++) {
        printf("\nenter element that you want to delete %d:",i);
        scanf("%d",&d);
        del(&head,d);
    }
     show(head);

     return 0;
}
