#include<stdio.h> 
int main(){
    int a,*fact,factorial=1;
    printf("Enter a number to find factorial :");
    scanf("%d",&a);
    fact=&a;
    if (*fact<0){
        printf("factorial must be >= 0");
        }
    else if(*fact==0 || *fact==1){
        printf("The factorial of %d is 1",a);
        }
    else{ 
        for (int i=1; i<=*fact;i++)
        factorial*=i;
    }
    printf("The factorial of %d is %d .",a,factorial);
    return 0;
}

