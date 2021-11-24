#include<stdio.h> //
void swap(int *x, int *y);
int main(){
    int a,b;
    printf("Enter value of a :");
    scanf("%d",&a);
    printf("Enter value of b :");
    scanf("%d",&b);
    printf("\nThe value of a before swaping :%d",a);
    printf("\nThe value of b before swaping :%d",b);
    swap(&a,&b);
    printf("\nThe value of a after swaping :%d",a);
    printf("\nThe value of b after swaping :%d",b);
    return 0;
}
void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}