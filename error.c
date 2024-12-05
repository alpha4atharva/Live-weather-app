#include<stdio.h>
#include<math.h>
int main()
{
    float x;
    scanf("%f",&x);
    float truev=sqrt(2);
    printf("Absolute error:%f\n",fabs(truev-x));
    printf("Relative error:%f\n",fabs(truev-x)/truev);
    printf("Percentage error:%f\n",100*fabs(truev-x)/truev);
    return 0;
}