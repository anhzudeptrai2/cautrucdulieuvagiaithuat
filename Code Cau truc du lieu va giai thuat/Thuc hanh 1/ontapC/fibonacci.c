#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 2)
    {
        printf("f1 = 1\n");
        printf("f2 = 1\n");
        return 0;
    }
    long long f1 = 1, f2 = 1, fn;
    for (int i = 3; i <= n; i++)
    {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    printf("%lld\n",fn);
    return 0;
}
