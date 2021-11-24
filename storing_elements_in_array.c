#include <stdio.h>
int main(){
    int size=0;
    int a[size];
    printf("Enter size of array :");
    scanf("%d",&size);
    for(int i=0; i<size; i++)
    {
        printf("Enter %d element :",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0; i<size; i++)
    {
        printf("\nThe %d element :%d",i+1,a[i]);
    }
    return 0;
}


