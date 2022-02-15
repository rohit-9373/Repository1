#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* next;
};

struct node* addEmp(struct node* l, int data) {
  if (l != NULL) return l;

  struct node* newnode = (struct node*)malloc(sizeof(struct node));

  newnode->data = data;
  l = newnode;
  l->next = l;
  return l;
}

struct node* addF(struct node* l, int data) {
 
  if (l == NULL) return addEmp(l, data);
  struct node* newnode = (struct node*)malloc(sizeof(struct node));
  newnode->data = data;
  newnode->next = l->next;
  l->next = newnode;

  return l;
}


struct node* addEnd(struct node* l, int data) {

  if (l == NULL) return addEmp(l, data);
  struct node* newnode = (struct node*)malloc(sizeof(struct node));

  newnode->data = data;
  newnode->next = l->next;
  l->next = newnode;
  l = newnode;
  return l;
}


struct node* addA(struct node* l, int data, int item) {
  
  if (l == NULL) return NULL;

  struct node *newnode, *p;

  p = l->next;
  do {
 
  if (p->data == item) {
    
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = p->next;
    p->next = newnode;
    if (p == l) l = newnode;
    return l;
  }

  p = p->next;
  } while (p != l->next);

  printf("\ninvalid node");
  return l;
}


void delete(struct node** l, int key) {
 
  if (*l == NULL) return;
  if ((*l)->data == key && (*l)->next == *l) {
  free(*l);
  *l = NULL;
  return;
  }

  struct node *temp = *l, *d;
  if ((*l)->data == key) {
  while (temp->next != *l) temp = temp->next;
  temp->next = (*l)->next;
  free(*l);
  *l = temp->next;
  }

 
  while (temp->next != *l && temp->next->data != key) {
  temp = temp->next;
  }

 
  if (temp->next->data == key) {
  d = temp->next;
  temp->next = d->next;
  free(d);
  }
}

void trav(struct node* l) {
  struct node* p;

  if (l == NULL) {
  printf("empty");
  return;
  }

  p = l->next;

  do {
  printf("%d ", p->data);
  p = p->next;

  } while (p != l->next);
}

int main() {
  struct node* l = NULL;

  l = addEmp(l, 4);
  l = addEnd(l, 5);
  l = addF(l, 2);
  l = addA(l, 3, 2);
  printf("circular link list: ");
  trav(l);
  delete(&l, 5);
  printf("\nafter deleted elements: ");
  trav(l);

  return 0;
}
