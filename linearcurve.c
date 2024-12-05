#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float x[100],y[100];
    for(int i=0;i<n;i++)
    {
        scanf("%f %f",&x[i],&y[i]);
    }
    float sumx=0,sumy=0,sumx2=0,sumxy=0;
    float a,b;
    for(int i=0;i<n;i++)
    {
        sumx+=x[i];
        sumy+=y[i];
        sumxy+=x[i]*y[i];
        sumx2+=x[i]*x[i];
    }
    a=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
    b=(sumy-a*sumx)/n;
    printf("y=%fx+%f",a,b);
    return 0;
}