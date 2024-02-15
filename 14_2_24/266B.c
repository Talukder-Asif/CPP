#include <stdio.h>

int main()
{
    int i, j, n, t;
    scanf("%d %d", &n, &t);
    char arr[n];
    if (n >= 1 && t <= 50)
    {
        for (i = 0; i <= n; i++)
        {
            scanf("%c", &arr[i]);
        }
        // printf("%s ",arr);
        for (j = 0; j < t; j++)
        {
            for (i = 0; i < n; i++)
            {
                // printf("%c ",arr[i]);
                if (arr[i] == 'B' && arr[i + 1] == 'G')
                {
                    char temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    ++i;
                }
            }
        }
        for (i = 0; i <= n; i++)
        {
            printf("%c", arr[i]);
        }
    }
    return 0;
}