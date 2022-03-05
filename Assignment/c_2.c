#include<stdio.h>

void marks(int a, int b, int c, float *total, float *percentage)
{
    *total = a+b+c;
    *percentage = ((a+b+c)/300.0)*100;
}
void main()
{
    int a, b, c;
    float total, percentage;

    printf("Enter the marks of subject 1: ");
    scanf("%d", &a);
    printf("Enter the marks of subject 2: ");
    scanf("%d", &b);
    printf("Enter the marks of subject 3: ");
    scanf("%d", &c);

    marks(a, b, c, &total, &percentage);

    printf("\n total: %f", total);
    printf("\n Percentage: %f", percentage);
}

