#include <stdio.h>
#include <conio.h>

int main() {
    int i = 0, j = 1, k ,c=2;

    printf("%d %d",i,j);
    

    while(  c<=30) 
     {
        k = i + j;
        printf("%d ", k);

        i = j;
        j = k;
        c++;
    }

    getch(); 
    return 0;
}
