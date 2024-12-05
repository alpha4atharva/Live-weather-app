#include<stdio.h>
#include<math.h>
float f(float x)
{
    return fabs(x*x-3*x+2);
}
float g(float x)
{
    return fabs((x*x+2)/3);
}
float dg(float x)
{
    return fabs((2*x)/3);
}
int main()
{
    float x0;
    int flg=1;
    while(flg)
    {
        scanf("%f",&x0);
        if(dg(x0)<1)
        {
            flg=0;
        }
        else
        {
            printf("Try again\n");
        }
    }
    flg=1;
    float aerr;
    scanf("%f",&aerr);
    while(flg)
    {
        if(f(x0)<aerr)
        {
            printf("Final ans=%f\n",x0);
            break;
        }
        printf("f(x)=%f\n",f(x0));
        x0=g(x0);
    }
    return 0;
}