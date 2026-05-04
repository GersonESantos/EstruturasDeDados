void imprime(int v[4])
{
    int i, j;
    for (i = 0; i <= 3; i++)
    {
        for (j = 0 ; j <= 3; j++)
        if (i == j)
        printf("%d ", v[i]);
        else
        printf("%d ", 0);
    }
}