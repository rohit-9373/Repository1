#include<stdio.h>

struct library
{
    int accession_number;
    char title[30];
    char author[30];
    int price;
    char flag[30];

}u[5];

int count;

void addData()
{   
   
   int numbers;
   printf("how many books that you want to enter data:");
   scanf("%d",&numbers);
   count = numbers;
   for(int i=0;i<numbers;i++)
   {
       printf("enter accession_number:");
       scanf("%d",&u[i].accession_number);
       printf("\n");
       printf("enter book title:");
       scanf("%s",&u[i].title);
       printf("\n");
       printf("enter book author:");
       scanf("%s",&u[i].author);
       printf("\n");
       printf("enter book price:");
       scanf("%d",&u[i].price);
       printf("\n");
       printf("issued or not:");
       scanf("%s",&u[i].flag);
       printf("\n");
   }
   printf("data entered succesfully\n");
    
}

void display()
{
   int numbers;
   printf("how many books that you want show:");
   scanf("%d",&numbers);
   for(int i=0;i<numbers;i++)
   {
       printf("accession_number:%d",u[i].accession_number);
       printf("\n");
       printf("book title:%s",u[i].title);
       printf("\n");
       printf("book author:%s",u[i].author);
       printf("\n");
       printf("book price:%d",u[i].price);
       printf("\n");
       printf("issued or not:%s",u[i].flag);
       printf("\n");
   } 
}

void author()
{
    char authorName[10];
    int numbers;
    printf("how many books that you want show:");
    scanf("%d",&numbers);
    printf("author name:");
    scanf("%s",authorName);
    for(int i=0;i<numbers;i++)
    {
            printf("%s",u[i].title);
            printf("\n");
    }
}

void title()
{
    int numbers;
    int accession_number;
    printf("how many books that you want show:");
    scanf("%d",&numbers);
    printf("enter accession number:");
    scanf("%d",&accession_number);
    for(int i=0;i<numbers;i++)
    {
           if(u[i].accession_number == accession_number)
           {
               printf("%s",u[i].title);
               printf("\n");
           }
    }
}

void bookCount()
{
    printf("there are %d books",count);
    printf("\n");
}

void titleInOrder()
{
   
   for(int i=0;i<count+1;i++)
   {
      printf("%s ",u[u[i].accession_number-1].title);
      printf("\n");
      
   }      
}



int main()
{
    int choice,exit=0;
    printf("1. Add book information\n");
    printf("2. Display book information\n");
    printf("3. List all books of given author\n");
    printf("4. List the title of specified book\n");
    printf("5. List the count of books in the library\n");
    printf("6. List the books in the order of accession number\n");
    printf("7. Exit\n");
    printf("....................................................\n");

    while(!exit)
    {
    printf("enter your choice:");
    scanf("%d",&choice);

    switch (choice)
    {
       case 1:
       addData();
       break;
       case 2:
       display();
       break;
       case 3:
       author();
       break;
       case 4:
       title();
       break;
       case 5:
       bookCount();
       break;
       case 6:
       titleInOrder();
       break;
       case 7:
       exit =1;
       printf("thank you");
       break;
       default:
       printf("invalid choice");
    }
    }
}