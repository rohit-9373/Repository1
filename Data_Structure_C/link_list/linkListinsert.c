#include<stdio.h>
#include<stdlib.h>


 struct node
 {
        int info;
        struct node *link;
 };
 
void display(struct node *);
struct node* insert(int x,struct node *);

 int main()
{
   struct node *first,*second,*third;
   first = (struct node *)malloc(sizeof(struct node));
   second = (struct node *)malloc(sizeof(struct node));
   third = (struct node *)malloc(sizeof(struct node));
   
   first->info = 1;
   first->link = second;
   
   second->info = 2;
   second->link = third;
   
   third->info = 3;
   third->link = NULL;
   
 display(first);
 first = insert(25,first);
 printf("after insertion\n");
 display(first);
}

void display(struct node *first)
{
    struct node *save;
    save = first;
    do
    {
      printf("%d",save->info);
      save  = save->link;
    }
    while(save!=NULL);
}

struct node* insert(int x,struct node *first)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    if(new == NULL)
    {
        printf("overflow\n");
        return 0;
    }
    else
    {
        new->info = x;
        new->link = first;
        return new;
    }
}
