#include <stdio.h>
#include <stdlib.h>
void length(char *str, int *len){
    int i = 0;
    while(str[i]!='\0')
    {
        i++;
    }
    *len = i;
}
void subString(char *str, int index, int length, char *str1){
    int i;
    for(i=0; i<length; i++){
        str1[i] = str[index+i];        
    }
}
int main(){
    char op, str[100], str1[100];
    int Length, index, nofc;
    while (1){
        printf("\n1. Input a string\n");
        printf("2. Length of the string\n");
        printf("3. Make substring\n");
        printf("4. Concat with a string\n");
        printf("5. Indexing of a string\n");
        printf("6. Inserting string\n");
        printf("7. Deleting string\n");
        printf("0. Exit\n");
        op = getche();
        switch (op){
        case '1':
            printf("\nEnter the string ");
            gets(str);
            printf("\nString has added.....\n");
            puts(str);
            break;
        case '2':
            length(str, &Length);
            printf("\nLength of the string : %d\n", Length);
            break;
        case '3':
            printf("\nStarting index and length of the string: ");
            scanf("%d %d", &index, &Length);
            subString(str, index, Length, str1);
            puts(str1);
            break;
        case '4':
            break;
        case '5':
            break;
        case '6':
            break;
        case '7':
            break;

        case '0':
            exit(0);
            break;
        }
    }
}