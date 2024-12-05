#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float A[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%f",&A[i][j]);
        }
    }
    float b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%f",&b[i]);
    }
    float x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    int itr=25;
    while(itr--)
    {
        for(int i=0;i<n;i++)
        {
            float a=b[i];
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    a-=x[j]*A[i][j];
                }
            }
            x[i]=a/A[i][i];
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%f ",x[i]);
    }
}