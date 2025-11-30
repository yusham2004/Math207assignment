
//TASK2
#include<stdio.h>
int main()
{
    int A[10][10],n,symmetric=1;

    printf("Size of Matrix:");
    scanf("%d",&n);
    printf("Elements:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }

        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(A[i][j]!=A[j][i])
                {
                    symmetric=0;
                    break;
                }
            }
        }
        if(symmetric==1)
        {
            printf("Symmetric");
        }
        else{
                printf("asymmetric");
                }
        return 0;


    }
