#include <stdio.h>
int main()
{
    int n, m;
    int sum = 0;
    int k;
    scanf("%d", &n);
    while (n != 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    k = sum % 10;
    printf("%d", k);
    return 0;
}