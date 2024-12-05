#include<stdio.h>
#define f(x) (x)*(x)
int main()
{
    int n;
    scanf("%d",&n);
    if(n%3!=0)  return 0;
    float a,b;
    scanf("%f %f",&a,&b);
    float sum=f(a)+f(b);;
    float h=(b-a)/n;
    for(int i=1;i<n;i++)
    {
        if(i%3==0)
        {
            sum+=2*f(a+i*h);
        }
        else
        {
            sum+=3*f(a+i*h);
        }
    }
    sum=sum*h*(3.0/8.0);
    printf("%f",sum);
    return 0;
}