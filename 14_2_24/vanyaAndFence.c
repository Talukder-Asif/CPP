#include <stdio.h>
int main()
{
    int i, test, height, arr[1000], total = 0;
    scanf("%d %d", &test, &height);
    if (test >= 1 && test <= 1000 && height >= 1 && height <= 1000)
    {
        for (i = 0; i < test; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < test; i++)
        {
            if (arr[i] > height)
            {
                total = total + 2;
            }
            else
            {
                total = total + 1;
            }
        }

        printf("%d", total);
    }
    return 0;
}