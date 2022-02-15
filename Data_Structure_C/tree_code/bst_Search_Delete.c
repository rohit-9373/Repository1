#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value; 
    struct node *r; 
    struct node *l; 
};

struct node* search(struct node *root, int x)
{
    if(root==NULL || root->value==x)  
        return root;
    else if(x>root->value) 
        return search(root->r, x);
    else 
        return search(root->l,x);
}


struct node* find_minimum(struct node *root)
{
    if(root == NULL)
        return NULL;
    else if(root->l != NULL) 
        return find_minimum(root->l); 
    return root;
}


struct node* new_node(int x)
{
    struct node *p;
    p = malloc(sizeof(struct node));
    p->value = x;
    p->l = NULL;
    p->r = NULL;

    return p;
}

struct node* insert(struct node *root, int x)
{
  
    if(root==NULL)
        return new_node(x);
    else if(x>root->value) 
        root->r = insert(root->r, x);
    else 
        root->l = insert(root->l,x);
    return root;
}


struct node* delete(struct node *root, int x)
{
    
    if(root==NULL)
        return NULL;
    if (x>root->value)
        root->r = delete(root->r, x);
    else if(x<root->value)
        root->l = delete(root->l, x);
    else
    {
        
        if(root->l==NULL && root->r==NULL)
        {
            free(root);
            return NULL;
        }

        else if(root->l==NULL || root->r==NULL)
        {
            struct node *temp;
            if(root->l==NULL)
                temp = root->r;
            else
                temp = root->l;
            free(root);
            return temp;
        }

       
        else
        {
            struct node *temp = find_minimum(root->r);
            root->value = temp->value;
            root->r = delete(root->r, temp->value);
        }
    }
    return root;
}

void inorder(struct node *root)
{
    if(root!=NULL) 
    {
        inorder(root->l); 
        printf(" %d ", root->value); 
        inorder(root->r);
    }
}

int main()
{
 
    struct node *root;
    int temp;
    root = new_node(1);
    insert(root,2);
    insert(root,3);
    insert(root,4);
    insert(root,5);
   
    printf("(Before)inorder:\n");
    inorder(root);
    printf("\n");

    root = delete(root, 1);
    root = delete(root, 3);
     printf("(after)inorder:\n");
    inorder(root);
    printf("\n");
    printf("element for search:");
    scanf("%d",&temp);
    int *b = search(root,temp);
    printf("location :%p",b);
    return 0;
}
