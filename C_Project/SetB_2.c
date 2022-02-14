#include <stdio.h>
#include <string.h>

struct childFather
{
    char child[100];
    char father[100];
};

typedef struct childFather childFather;

int main()
{
    FILE *f1;
    f1 = fopen("file.txt", "r");
    childFather arr[100];
    int i = 0;
    while (!feof(f1))
    {
        fscanf(f1, "%s %s", arr[i].child, arr[i].father);
        i++;
    }
    printf("Input:");
    char s[100];
    scanf("%s", s);
    char *child;
    int gChilds = 0;
    for (int j = 0; j < i; j++)
    {
        if (strcmp(s, arr[j].father) == 0)
        {
            child = arr[j].child;
            break;
        }
    }
    for (int j = 0; j < i; j++)
    {
        if (strcmp(child, arr[j].father) == 0)
        {
            gChilds++;
        }
    }
    printf("Output: %d", gChilds);
    printf("\n\n");
}