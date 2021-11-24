#include <stdio.h>
int main() {
    int size;
    int a[size];
    printf("Enter the size of array :");
    scanf("%d", &size);
    for (int i=0; i<size; i++) {
        printf("\nEnter %d: ", i+1);
        scanf("%d",&a[i]);
    }
    
    printf("\n");
    
    for(int i=0; i<size; i++) {
        printf("Element %d: %d\n", i+1, a[i]);
    }
    
    return 0;
}