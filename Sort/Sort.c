#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    char op;
    int Bubble[10000], Quick[10000], Insertion[10000], Selection[10000], i, n;
    while(1){
        printf("\n1. Make array?\n");
        printf("2. Bubble Sort\n");
        printf("3. Quick Sort\n");
        printf("4. Insertion Sort\n");
        printf("5. Selection Sort\n");
        printf("0. Exit\n");
        op = getche();
        switch (op)
        {
        case '1':
            printf("\nEnter the amount of Number : ");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            Bubble[i] = Quick[i] = Insertion[i]= Selection[i] = (rand() % 100);
            break;
        case '2':


        case 0:
            exit(0);
            break;
        }
    }
}