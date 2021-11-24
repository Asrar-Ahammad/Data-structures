#include <stdio.h>
int addition(int *x, int *y);
int main(){
    int a,b,add=0;
    printf("Enter value of a :");
    scanf("%d",&a);
    printf("Enter value of b :");
    scanf("%d",&b);
    add=addition(&a,&b);
    printf("The sum of the two values is:%d",add);

    return 0;
}

int addition(int *x,int *y){
    int sum=0;
    sum = *x+*y;
    return sum;
}