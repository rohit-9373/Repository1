#include <stdio.h>
#include <string.h>

unsigned int int_to_bin(unsigned int k)
{
    return (k == 0 || k == 1 ? k : ((k % 2) + 10 * int_to_bin(k / 2)));
};

void reverseBits(char *s)
{
    int last = strlen(s) - 1;
    for (int i = 0; i < strlen(s) / 2; i++, last--)
    {
        char c = s[i];
        s[i] = s[last];
        s[last] = c;
    }
}
int main()
{
    char s[100];
    int num;
    printf("enter number:");
    scanf("%d",&num);
    sprintf(s, "%d", int_to_bin(num));
    reverseBits(s);
    printf("%s\n\n", s);
    return 0;
}