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
    float x0,term,ans=0;
    scanf("%f",&x0);
    for(int i=0;i<n;i++)
    {
        term=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                term*=(x0-x[j])/(x[i]-x[j]);
            }
        }
        ans+=term*y[i];
    }
    printf("%f",ans);
    return 0;
}