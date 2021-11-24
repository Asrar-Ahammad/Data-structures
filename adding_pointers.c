#include<stdio.h>       // for stdio
int main(){            // run
    int *p,*q,a,b,sum;
    printf("Enter value of a :"); 
    scanf("%d",&a);
    printf("Enter value of b :");
    scanf("%d",&b);
    p=&a;    
    q=&b;
    sum=*p+*q;   // sum
    printf("The sum of two numbers :%d",sum);
    return 0;         //return 0
}