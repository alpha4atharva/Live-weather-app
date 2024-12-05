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
        float pivot=matrix[i][i];
        for(int j=0;j<=n;j++)
        {
            matrix[i][j]/=pivot;
        }
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                float pivot=matrix[j][i];
                for(int k=0;k<=n;k++)
                {
                    matrix[j][k]-=pivot*matrix[i][k];
                }
            }
        }
    }
    float ans[n];
    for(int i=0;i<n;i++)
    {
        ans[i]=matrix[i][n]/matrix[i][i];
        printf("%f ",ans[i]);
    }
    
}