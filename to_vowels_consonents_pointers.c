#include<stdio.h> //
int main(){
    char str[100];
    char *p;
    int vcount=0,ccount=0;
    printf("Enter a string :");
    fgets(str,100,stdin);
    p=str;
    while(*p!='\0')
    {
        if (*p=='A'|| *p=='E'|| *p=='I'|| *p=='O'|| *p=='U'|| *p=='a'||*p=='e'|| *p=='i'|| *p=='o'|| *p=='u')
        {
            vcount++;
        }
        else
        {
            ccount++;
        }
        p++;
    }
    printf("The Vowels in the srting : %d",vcount);
    printf("\nThe Consonents in the srting : %d",ccount);
}