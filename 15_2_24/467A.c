#include <stdio.h>

int main()
{
    int i, n, j, Arr[100][100], result = 0;
    scanf("%d", &n);
    if (n >= 1 && n <= 100)
    {
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < 2; j++)
            {
                scanf("%d", &Arr[i][j]);
            }
            
        }


        for ( i = 0; i < n; i++)
        {
            if(Arr[i][0]+2 <= Arr[i][1]){
                result = result + 1;
            }
        }
        
        printf("%d", result);
    }
    return 0;
}