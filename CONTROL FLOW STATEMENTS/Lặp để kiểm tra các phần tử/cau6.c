#include <stdio.h>
int nguyento(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i < (n - 1); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{

    int n, i, m;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        m = nguyento(i);
        if (m == 1)
            printf("%d ", i);
    }
}