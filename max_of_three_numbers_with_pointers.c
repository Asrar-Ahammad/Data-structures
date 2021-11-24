#include<stdio.h>  // for stdio
int main(){
    int *a,*b,*c,x,y,z;
    printf("Enter value of x :");
    scanf("%d",&x);
    printf("\n Enter value of y :");
    scanf("%d",&y);
    printf("\nEnter value of z :");
    scanf("%d",&z);
    a=&x;
    b=&y;
    c=&z; 
    if(*a>*b && *a>*c){
        printf("x is the greater number");
    }
    else{
        if(*b>*a && *b>*c){
            printf("y is the greater value");
        }
        else{ 
            printf("z is the greater value");
        }
    }
    return 0;
}