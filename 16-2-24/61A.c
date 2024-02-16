#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int a, b, sum, temp, temp1, i = 10, j = 1, mainLength=0, subLength=0, k;
    char str[20];
    scanf("%ld %ld", &a, &b);
    sum = a + b;
    temp = sum;
    while(temp>1){ 
        if(temp % i >1){
            sum = sum - ((temp%i)*j);
        }
        temp = temp / i;
        mainLength++;
        j = j * 10;
    }


    temp1 = sum;
    while(temp1>0){ 
        temp1 = temp1 / i;
        subLength++;
    }

    k = mainLength - subLength;

    for (int x = 0; x < k; x++)
    {
    printf("0");
    }
    
    printf("%ld", sum);

    return 0;
}