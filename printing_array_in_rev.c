#include<stdio.h> //
int main(){
    int size; 
    int array[size];
    printf("Enter size of array :");
    scanf("%d", &size);
    printf("\nEnter elements in array :");
    for(int i=0; i<size; i++){
        scanf("%d", &array[i]);
    }

    printf("\nThe elements in reverse order :");
    for(int i=size-1; i>=0; i--){
        printf("\n%d",array[i]);
    }
}
