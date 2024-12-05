#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float matrix[n][n+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            scanf("%f",&matrix[i][j]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            float ratio=matrix[j][i]/matrix[i][i];
            for(int k=0;k<=n;k++)
            {
                matrix[j][k]-=ratio*matrix[i][k];
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            printf("%f ",matrix[i][j]);
        }
        printf("\n");
    }
    
    float ans[n];
    for(int i=n-1;i>=0;i--)
    {
        ans[i]=matrix[i][n];
        for(int j=n-1;j>i;j--)
        {
            ans[i]-=ans[j]*matrix[i][j];
        }
        ans[i]/=matrix[i][i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%f ",ans[i]);
    }
}