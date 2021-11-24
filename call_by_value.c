#include<stdio.h> 
void swap(int a,int b);
int main(){
    int x,y;
    printf("Enter value of x :");
    scanf("%d",&x);
    printf("\nEnter value of y :");
    scanf("%d",&y);
    printf("\nThe value of x before swaping %d",x);
    printf("\nThe value of y before swaping %d",y);
    swap(x,y);
    return 0;
}

void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nThe value of x after swaping %d",a);
    printf("\nThe value of y after swaping %d",b);
}