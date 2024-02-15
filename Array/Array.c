#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// Read an array
void readArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++){
        arr[i] = rand() % 100;
    }
}
// Display an array
void displayArray(int arr[], int size){
    int i = 0;
    printf("\n");
    while (i < size){
        printf("%d ", arr[i]);
        i++;
    }
}
// Insert a item in this array
void insertItem(int arr[], int *size){
    int loc, i, item;
    printf("\n Enter Item and location : ");
    scanf("%d %d", &item, &loc);
    if (loc > *size + 1 || loc < 0){
        printf("\n Location can't be %d", loc);
    }else{
        for (i = *size; i > loc; i--){
            arr[i + 1] = arr[i];
        }
        arr[loc] = item;
        *size = *size + 1;
        displayArray(arr, *size);
    }
}
// Delete a item from the array
void deleteItem(int arr[], int *size){
    int loc, i;
    printf("\nEnter the deleting items location: ");
    scanf("%d", &loc);
    if (loc > *size || loc < 0){
        printf("\n Location can't be %d", loc);
    }else{
        for (i = loc; i < *size; i++){
            arr[i] = arr[i + 1];
        }
        arr[*size] = 0;
        *size = *size - 1;
        displayArray(arr, *size);
    }
}

void linearSearch(int arr[], int size){
    int i, item, flag = 0;
    printf("\nEnter the item to search : ");
    scanf("%d", &item);
    while (i <= size){
        if (arr[i] == item){
            printf("\nItem %d is found on location %d", item, i);
            flag = 1;
            break;
        }
        i++;
    }if (!flag){
        printf("\nItem %d is not found...", item);
    }
}
// Bubble Sort of a array
void bubbleSort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++){
        for (j = 0; j < size - 1 - i; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// binarySearch Function
void binarySearch(int arr[], int size){
    int left = 0, right = size, middle, item, flag = 0;
    printf("\nEnter the item to search : ");
    scanf("%d", &item);

    while (left <= right){
        middle = (left + right) / 2;
        if (arr[middle] == item){
            printf("\nItem found on index : %d\n", middle);
            flag = 1;
            break;
        }else if (arr[middle] < item){
            left = middle + 1;
        }else{
            right = middle - 1;
        }
    }if (!flag){
        printf("\nItem %d is not found...", item);
    }
}
int main(){
    char op;
    int size, arr[10000];
    while (1){
        printf("\n1. Create an array of random element\n");
        printf("2. Display the array \n");
        printf("3. Insert an item into the array\n");
        printf("4. Delete an item into the array\n");
        printf("5. Search an item using linear search\n");
        printf("6. Bubble sort the array\n");
        printf("7. Search an item using binary search\n");
        printf("0. Exit\n");
        op = getche();
        switch (op){
            
        case '1':
            printf("\nEnter the size of the array : ");
            scanf("%d", &size);
            readArray(arr, size);
            break;
        case '2':
            displayArray(arr, size);
            break;
        case '3':
            insertItem(arr, &size);
            break;
        case '4':
            deleteItem(arr, &size);
            break;
        case '5':
            linearSearch(arr, size);
            break;
        case '6':
            bubbleSort(arr, size);
            displayArray(arr, size);
            break;
        case '7':
            binarySearch(arr, size);
            break;

        case '0':
            exit(0);
            break;
        }
    }
    return 0;
}