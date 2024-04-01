#include<stdio.h>
#include<conio.h>

int main()
{
    int m,n,sum=0;
    int arr1[3][4],arr2[4][2],result[3][2];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    } 
    printf("for 2 matrix");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
             scanf("%d",&arr2[i][j]);
        }
        
    } 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
              for(int k=0;k<4;k++)
              {
                sum+=arr1[i][k]*arr2[k][j];
              }
              result[i][j]=sum;
              sum=0;
        }
        
    } 
    for(int i=0;i<3;i++) 

    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
        
    } 
    return 0;
    

}