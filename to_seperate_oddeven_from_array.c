#include<stdio.h> //
int main(){
    int size;
    int array[size],num;
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("\nEnter elements in array :");
    for(int i=0; i<size; i++){
        scanf("%d",&array[i]);
    }
    for(int i=0; i<size; i++){
        num=array[i];
        if(array[i]%2==0){
            printf("\n%d is even",num);
        }
        else{
             printf("\n%d is odd",num); 
             }
    }
}