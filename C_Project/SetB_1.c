#include<stdio.h>
#include<string.h>

int main()
{
    int len;
    int r_len;
    char str[100];
    char current = NULL;
    char past = NULL;
    int count = 0;
    char final[10] = "";
    char result[10] = "";
    int top = 0;
    
    printf("enter length of your string:");
    scanf("%d",&len);
    do
    {
       printf("\n");
       printf("enter your string:");
       scanf("%s",str);
       r_len = strlen(str);
       if(len != r_len)
       {
           printf("your string length did not match! enter again!!\n");
       }
    }while(len!=r_len);

    printf("your string:%s",str);
    printf("\n");
    for(int i=0;i<len+1;i++)
    {
      current = str[i];
      if(past == NULL) 
      {
         past = str[i];
         count++;
        
      }
      else
      {
          if(current == past)
          {
          
            count++;
          }
          else
          {
              
              if(count%2!=0)
              { 
                final[top]  = past;  
                top++;
              }
              count=1;
              past = current;
              
          }
      }
      
     

    }
    current = NULL;
    past = NULL;
    count = 0;
    top = 0;
    for(int i=0;i<strlen(final)+1;i++)
    {
      current = final[i];
      if(past == NULL) 
      {
         past = final[i];
         count++;
        
      }
      else
      {
          if(current == past)
          {
          
            count++;
          }
          else
          {
              
              if(count == 3 || count ==1)
              { 
                result[top]  = past;  
                top++;
              }
              count=1;
              past = current;
              
          }
      }
      
     

    }
        
        printf("result:");
        if(strlen(result))
        {
         printf("%s",result);
        }
        else
        {
            printf("Empty String");

        }
        
        
}