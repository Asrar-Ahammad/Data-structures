#include<stdio.h> 
int main(){
    int size = 0;
    int array[size],*p,sum = 0;
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("\nEnter elements in array :");
    for(int i;i<=size;i++){ 
        scanf("%d",&array[i]);
    }
    p=array;
    for(int i=0;i<=size;i++){
        sum += *p;
        p++;
    }
    printf("\nThe sum of elements in array :%d",sum);
   return 0;
}