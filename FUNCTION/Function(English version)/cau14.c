double power(float a, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return a;
    return a * power(a, n - 1);
}