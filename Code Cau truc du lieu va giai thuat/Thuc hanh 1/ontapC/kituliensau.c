#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        char s;
        scanf(" %c", &s);
        if (s == 'z')
        {
            printf("a\n");
        }
        else
        {
            printf("%c\n", s + 1);
        }
    }
    return 0;
}
