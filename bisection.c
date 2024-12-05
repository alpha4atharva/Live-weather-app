#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*x*x-x-1;
}
int main()
{
    float a,b;
    int flg=1;
    printf("Enter a and b\n");
    while(flg)
    {
        scanf("%f %f",&a,&b);
        if((f(a)*f(b))<0)
        {
            flg=0;
        }
        else
        {
            printf("Try again\n");
        }
    }
    
    float aerr;
    printf("Enter aerr:");
    scanf("%f",&aerr);
    flg=1;
    float x0;
    while(flg)
    {
        x0=(a+b)/2.0;
        if(fabs(f(x0))<=aerr)
        {
            printf("Ans=%f",x0);
            break;
        }
        if(f(a)*f(x0)<0)
        {
            b=x0;
        }
        else
        {
            a=x0;
        }
        printf("Ans=%f\n",f(x0));
    }
    return 0;
}