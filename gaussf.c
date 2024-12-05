#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float A[n][n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%f %f",&A[i][0],&A[i][1]);
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            A[j][i]=A[j+1][i-1]-A[j][i-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf("%f ",A[i][j]);
        }
        printf("\n");
    }
    float x;
    scanf("%f",&x);
    float h=(A[1][0]-A[0][0]);
    int i=0;
    while(A[i][0]<x)  i++;
    i--;
    float u=(x-A[i][0])/h;
    float m=u;
    int k=0,d=3;
    float y=m*A[i][2];
    for(int j=2;j<=n;j++)
    {
        if(j%2==1)
        {
            m=m*((u+k)/j);
        }
        else
        {
            k=k+1;
            m=m*((u-k)/j);
        }
        if(i-k<0 || i-k>n-j+1) break;
        y+=m*A[i-k][d];
        d++;
    }
    y+=A[i][1];
    printf("%f ",y);
}