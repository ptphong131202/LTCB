#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 2)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        for (int i = 1; i <= 2; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (int i = 3; i < n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                {
                    printf("*");
                }
                else
                    printf("-");
            }
            printf("\n");
        }
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
    }
}
