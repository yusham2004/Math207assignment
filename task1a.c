//TASK1(a)
#include<stdio.h>
int main()
{
    int row,col;
    int A[10][10],B[10][10];
    printf("Enter num of rows:");
    scanf("%d",&row);
    printf("Enter num of columns:");
    scanf("%d",&col);
    printf("Enter the elements matrix:");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            B[j][i]=A[i][j];
        }
    }
    printf("Transpose:\n");
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
