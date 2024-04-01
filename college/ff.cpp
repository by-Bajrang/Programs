#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=1;
    printf("%d",i);
    printf(" ");
    printf("%d",j);
    for(int k=0;k<=30;k++)
    {
        k=i+j;
        printf(" %d ",k);
        
        i=j;
        j=k;

    }
getch();
}