#include <stdio.h>

int main()
{
    int i, n, arr[1000], brr[1000];
    scanf("%d", &n);
    if (n >= 1 && n <= 100)
    {
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 1; i <= n; i++)
        {
            brr[arr[i]]= i;
        }
        for (i = 1; i <= n; i++)
        {
            printf("%d ", brr[i]);
        }

    }
    return 0;
}