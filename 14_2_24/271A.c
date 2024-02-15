#include <stdio.h>

int main()
{
    int i = 1, j, year, newYear, temp, l, m, s, f;
    scanf("%d", &newYear);
    if (newYear >= 1000 && newYear <= 9000)
    {
        year = newYear + 1;
        while(i){
            temp = year;
            l = temp % 10;
            temp = (temp - l)/10;
            m = temp % 10;
            temp = (temp - m)/10;
            s = temp % 10;
            temp = (temp - s)/10;
            f = temp;

            if(f == s || f == m || f == l ||s == m || s == l || m == l)
            {
                year = year + 1;
            }
            else{
            printf("%d", year);
            i = 0;
            }
        }
    }
    return 0;
}