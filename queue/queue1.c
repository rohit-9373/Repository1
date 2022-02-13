#include <stdio.h>
#define SIZE 5
int temp;

void enQueue(int);
void deQueue();
void show();

int items[SIZE], front = -1, rear = -1;



void enQueue(int value) {
  if (rear == SIZE - 1)
    printf("\nQueue is full");
  else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    printf("\nInserted %d", value);
  }
}

void deQueue() {
  if (front == -1)
    printf("\nQueue is empty");
  else {
    printf("\nDeleted : %d", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}


void show() {
  if (rear == -1)
    printf("\nQueue is empty");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}

int main()
{
   for(int i=0;i<SIZE;i++)
   {
   printf("enter element:");
   scanf("%d",&temp);
   enQueue(temp);
   printf("\n");
   }
show();
for(int i=0;i<2;i++)
   {
  
   deQueue();
   }
   show();
}
