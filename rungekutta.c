#include<stdio.h>
#define f(x,y) (((y)*(y)-(x)*(x))/((y)*(y)+(x)*(x)))
int main()
{
    int n;
    scanf("%d",&n);
    float x0,y0,xn,yn,h,k,k1,k2,k3,k4;
    scanf("%f %f %f",&x0,&y0,&xn);
    h=(xn-x0)/n;
    for(int i=0;i<n;i++)
    {
        k1=h*f(x0,y0);
        k2=h*f(x0+h/2,y0+k1/2);
        k3=h*f(x0+h/2,y0+k2/2);
        k4=h*f(x0+h,y0+k3);
        k=(k1+2*k2+2*k3+k4)/6;
        yn=y0+k;
        printf("%f %f %f\n",x0,y0,yn);
        y0=yn;
        x0=x0+h;
    }
    
    printf("Final value:%f %f %f\n",x0,y0,yn);
    return 0;
}