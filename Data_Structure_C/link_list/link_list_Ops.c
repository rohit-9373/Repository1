#include <stdio.h>
#include <stdlib.h>


struct node {
  int data;
  struct node* next;
};


void insert_B(struct node** head_ref, int new_data) {
  
  struct node* new_node = (struct node*)malloc(sizeof(struct node));

 
  new_node->data = new_data;

  new_node->next = (*head_ref);
  
  (*head_ref) = new_node;
}


void insert_A(struct node* prev_node, int new_data) {
  if (prev_node == NULL) {
  printf("the given previous node cannot be NULL");
  return;
  }

  struct node* new_node = (struct node*)malloc(sizeof(struct node));
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}


void insertAtEnd(struct node** head_ref, int new_data) {
  struct node* new_node = (struct node*)malloc(sizeof(struct node));
  struct node* last = *head_ref; /* used in step 5*/

  new_node->data = new_data;
  new_node->next = NULL;

  if (*head_ref == NULL) {
  *head_ref = new_node;
  return;
  }

  while (last->next != NULL) last = last->next;

  last->next = new_node;
  return;
}


void del(struct node** head_ref, int key) {
  struct node *temp = *head_ref, *prev;

  if (temp != NULL && temp->data == key) {
  *head_ref = temp->next;
  free(temp);
  return;
  }
 
  while (temp != NULL && temp->data != key) {
  prev = temp;
  temp = temp->next;
  }

  
  if (temp == NULL) return;

  
  prev->next = temp->next;

  free(temp);
}


int search(struct node** head_ref, int key) {
  struct node* current = *head_ref;

  while (current != NULL) {
  if (current->data == key) return 1;
  current = current->next;
  }
  return 0;
}


void sort(struct node** head_ref) {
  struct node *current = *head_ref, *index = NULL;
  int temp;

  if (head_ref == NULL) {
  return;
  } else {
  while (current != NULL) {
   
    index = current->next;

    while (index != NULL) {
    if (current->data > index->data) {
      temp = current->data;
      current->data = index->data;
      index->data = temp;
    }
    index = index->next;
    }
    current = current->next;
  }
  }
}


void show(struct node* node) {
  while (node != NULL) {
  printf(" %d ", node->data);
  node = node->next;
  }
}


int main() {
  struct node* head = NULL;

  insertAtEnd(&head, 5);
  insert_B(&head, 8);
  insert_B(&head, 3);
  insertAtEnd(&head, 6);
  insert_A(head->next, 2);

  printf("linked_list: ");
 show(head);

  printf("\nafter deleting an element: ");
  del(&head, 3);
 show(head);

  int find = 3;
  if (search(&head, find)) {
  printf("\n %d is found", find);
  } else {
  printf("\n %d is not found", find);
  }

  sort(&head);
  printf("\nSorted linked_list: ");
 show(head);
}
