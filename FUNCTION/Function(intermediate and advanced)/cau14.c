double S(int N)
{
    if (N == 1)
        return 1;
    else
        return ((double)1 / N) + S(N - 1);
}