#include <stdio.h>

int main()
{
    int i, n, test, result = 0;
    scanf("%d", &n);
    if (n >= 1 && n <= 100)
    {
        for(i = 0; i<n; i++){
            scanf("%d", &test);
            if(test == 1){
                result = 1;
            }
        }
        if(result){
            printf("HARD");
        }else{
            printf("EASY");
        }
    }
    return 0;
}