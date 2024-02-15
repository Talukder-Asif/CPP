#include<stdio.h>
#include<stdlib.h>
#define MaxCap 5
int stack[MaxCap], top = -1;
void Push (int x){
    if(MaxCap > top+1){
    ++top;
    stack[top] = x;
    printf("%d is pushed in Stack", x); 
    }else
        printf("\nStack overflow!\n");
}
int Pop (){
    if( top >= 0){
        int temp = stack[top];
        --top;
        return temp;
    }else{
        printf("\nEmpty stack!\n");
        return -1;
    }
}
void Display (){
    int i;
    for(i=0; i<MaxCap; i++){
        printf("%d ", stack[i]);
    }
}
int main(){
    char op;
    int x;
    while(1){
        printf("\n1. Create a Stack and initialize\n");
        printf("2. Push an item to the stack\n");
        printf("3. Pop an item from the stack\n");
        printf("4. Display the array\n");
        printf("0. Exit\n");
        int x;
        op = getche();
        switch (op){
        case '1':
            top = -1;
            printf("\n Stack created and initialized\n");
            break;
        case '2':
            printf("\nEnter a integer: ");
            scanf("%d", &x);
            Push(x);
            break;
        case '3':
            x = Pop();
            if(x != -1)
                printf("\nPoped value is %d\n", x);
            break;
        case '4':
        Display();
            break;
        case '0':
            exit(0);
            break;
        }
    }
}