#include<stdio.h>
#define f(x) (x)*(x)
int main()
{
    int n;
    scanf("%d",&n);
    float a,b;
    scanf("%f %f",&a,&b);
    float sum=f(a)+f(b);;
    float h=(b-a)/n;
    for(int i=1;i<n;i++)
    {
        sum+=2*f(a+i*h);
    }
    printf("%f",sum);
    return 0;
}