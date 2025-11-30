//TASK4
#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],result[10][10];
    int r1,r2,c1,c2;
    printf("Enter rows and columns for A:");
    scanf("%d %d",&r1,&c1);
    printf("Elements of A:");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");

    printf("Enter rows and columns for B:");
    scanf("%d %d",&r2,&c2);

printf("Elements of B:");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n");
    if(r1==r2 && c1==c2) //in case of addition
    {
        printf("Addition:\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                result[i][j]=A[i][j]+B[i][j];
                printf("%d",result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("null");
    }

    if(r1==r2 && c1==c2) //in case of substraction
    {
        printf("Substraction:\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                result[i][j]=A[i][j]-B[i][j];
                printf("%d",result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("null");
    }
    if(c1==r2) //in case of multiplication
    {
        printf("multiplication:\n");
        for(int i=0;i<r1;i++)
            for(int j=0;j<c2;j++)
        result[i][j]=0;
        for(int i=0; i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                for(int k=0;k<c1;k++)
                {
                    result[i][j]+=A[i][k]*B[k][j];
                }
                printf("%d",result[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("null");
    }
    return 0;
}
