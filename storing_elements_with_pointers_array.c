#include <stdio.h>
int main() {
    int arr[5], *array;
    
    printf("Enter the elements: ");
    for(int i=0; i<5; i++) {
        printf("Element %d :", i+1);
        scanf("%d", &arr[i]);
    }
    array = &arr;
    printf("\nArray Elements");
    for(int i=0; i<5;i++) {
        printf(" %d",*(array + i));
    }
    
    return 0;
}
