double power(float a, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return a;
    return power(a, n - 1) * a;
}