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
        for(int j=2;j<=n-i;j++)
        {
            printf("%f ",A[i][j]);
        }
        printf("\n");
    }
    float ans=A[0][1];
    float h=A[1][0]-A[0][0];
    float x;
    scanf("%f",&x);
    float fact=1,a=1,u=(x-A[0][0])/h;
    float m=u;
    for(int i=2;i<=n;i++)
    {
        ans+=u*A[0][i]/fact;
        u*=(m-a);
        a++;
        fact*=i;
    }
    printf("%f",ans);
}