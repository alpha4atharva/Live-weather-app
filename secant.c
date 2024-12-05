#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*x*x-5*x+1;
}

int main()
{
    float x0,x1,x2;
    int flg=1;
    scanf("%f %f",&x0,&x1);
    float aerr;
    scanf("%f",&aerr);
    while(flg)
    {
        x2=x1-(f(x1)*(x1-x0)/(f(x1)-f(x0)));
        if(fabs(f(x2))<aerr)
        {
            printf("Final ans=%f\n",x2);
            break;
        }
        printf("f(x)=%f\n",f(x2));
        x0=x1;
        x1=x2;
    }
    return 0;
}