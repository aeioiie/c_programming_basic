#include <stdio.h>

int bin_coef(int n, int k)
{
    if (0 <= k && k <= n)
    {
        if (k == 0 || k == n)
        {
            return 1;
        }
        else
        {
            return bin_coef(n - 1, k - 1) + bin_coef(n - 1, k);
        }
    }
}

int main(void)
{
    int n, k;
    printf("input n, k: ");
    scanf("%d %d", &n, &k);
    printf("n combination k is: %d\n", bin_coef(n, k));

    return 0;
}