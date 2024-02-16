#include <stdio.h>

int main()
{
    int i, n, magnet = 1, temp1=0, value;
    scanf("%d", &n);
    if (n >= 1 && n <= 100000)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &value);
            if(!temp1){
                temp1=value;
                continue;
            }
            if(temp1 != value){
                magnet++;
                temp1 = value;
            }
        }
        printf("%d", magnet);
        
    }
    return 0;
}