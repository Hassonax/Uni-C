#include <stdio.h>

int main()
{
    int n, i, j;
    int s = 0;
    int factor;

    printf("Enter the value of n: ");

    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            factor = 1;
            for (j = 1; j <= i; j++)
            {
                factor = factor * j;
            }
            s = s + factor;
        }
        else
        {
            s = s - i;
        }
    }

    printf("Result s = %d\n", s);
    return 0;
}
