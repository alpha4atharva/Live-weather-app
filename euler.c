#include<stdio.h>
#define f(x,y) x+y
int main()
{
    int n;
    scanf("%d",&n);
    float x0,y0,xn,yn,slope,h;
    scanf("%f %f %f",&x0,&y0,&xn);
    h=(xn-x0)/n;
    for(int i=0;i<n;i++)
    {
        slope=f(x0,y0);
        yn=y0+h*slope;
        printf("The value of x and y are: %f %f\n",x0,y0);
        y0=yn;
        x0=x0+h;
    }
    printf("The final value of x and y are: %f %f\n",x0,y0);
    return 0;
}