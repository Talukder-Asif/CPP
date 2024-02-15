#include <stdio.h>

int main()
{
    int i, j, number, time;
    scanf("%d %d", &number, &time);
    if (number >= 2 && 1 <= time && time <= 50)
    {
        for (i = 0; i < time; i++)
        {
            if(number%10 == 0){
                number = number / 10;
            }else{
                number = number - 1;
            }
        }
        printf("%d", number);
    }
    return 0;
}