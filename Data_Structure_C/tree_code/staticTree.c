#include<stdio.h>
#include<stdlib.h>
struct node
{
    char value;
    struct node *l;
    struct node *r;
};



void preorder(struct node* root) {
  if (root == NULL) return;
  printf("%c ", root->value);
  preorder(root->l);
  preorder(root->r);
}

void postorder(struct node* root) {
  if (root == NULL) return;
  postorder(root->l);
  postorder(root->r);
  printf("%c ", root->value);
}

void inorder(struct node* root) {
  if (root == NULL) return;
  inorder(root->l);
  printf("%c ", root->value);
  inorder(root->r);
}



int main()
{
    struct node *a;
    struct node *b;
    struct node *c;
    struct node *d;
    struct node *e;
    struct node *f;
    struct node *g;
    
    a = malloc(sizeof(struct node));
    b = malloc(sizeof(struct node));
    c = malloc(sizeof(struct node));
    d = malloc(sizeof(struct node));
    e = malloc(sizeof(struct node));
    f = malloc(sizeof(struct node));
    g = malloc(sizeof(struct node));
    
    a->value = 'A';
    a->l = b;
    a->r = d;
    
    b->value = 'B';
    b->l = c;
    b->r = NULL;
    
    c->value = 'C';
    c->l = NULL;
    c->r = NULL;
    
     d->value = 'D';
    d->l = e;
    d->r = g;
    
    e->value = 'E';
    e->l = NULL;
    e->r = f;
    
    g->value = 'G';
    g->l = NULL;
    g->r = NULL;
    
    f->value = 'F';
    f->l = NULL;
    f->r = NULL;
    
    printf("pre order:\n");
    preorder(a);
    printf("\n");
    printf("post order:\n");
    postorder(a);
    printf("\n");
     printf("in order:\n");
    inorder(a);
    printf("\n");

    
}
