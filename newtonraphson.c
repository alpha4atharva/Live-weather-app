#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*x-12;
}

float df(float x)
{
    return 2*x;
}

int main()
{
    float x0,x1;
    int flg=1;
    scanf("%f",&x0);
    float aerr;
    scanf("%f",&aerr);
    while(flg)
    {
        x1=x0-(f(x0)/df(x0));
        if(fabs(f(x1))<aerr)
        {
            printf("Final ans=%f\n",x1);
            break;
        }
        printf("f(x)=%f\n",f(x1));
        x0=x1;
    }
    return 0;
}