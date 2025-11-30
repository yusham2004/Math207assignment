
//TASK1(b)
#include<stdio.h>
int main()
{
    int A[10][10];
    int n;
    int temp;
    printf("Size of matrix:");
    scanf("%d",&n);
    printf("Elements of %d x %d :",n,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }
    printf("transpose:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            {
                printf("%d",A[i][j]);
            }
            printf("\n");
    }
    return 0;
        }
