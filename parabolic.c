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
    float sumx=0,sumy=0,sumx2=0,sumx3=0,sumx4=0,sumxy=0,sumx2y=0;
    for(int i=0;i<n;i++)
    {
        sumx+=x[i];
        sumx2+=(x[i]*x[i]);
        sumx3+=(x[i]*x[i]*x[i]);
        sumx4+=(x[i]*x[i]*x[i]*x[i]);
        sumy+=y[i];
        sumxy+=(x[i]*y[i]);
        sumx2y+=(x[i]*x[i]*y[i]);
    }
    
    float A[3][4]={
        {sumx4,sumx3,sumx2,sumx2y},
        {sumx3,sumx2,sumx,sumxy},
        {sumx2,sumx,n,sumy}};
    for(int i=0;i<3;i++)
    {
        float pivot=A[i][i];
        for(int j=0;j<4;j++)
        {
            A[i][j]/=pivot;
        }
        for(int j=0;j<3;j++)
        {
            if(i!=j)
            {
                float ratio=A[j][i];
            for(int k=0;k<4;k++)
            {
                A[j][k]-=ratio*A[i][k];
            }
            }
        }
    }
    float a,b,c;
    c=A[2][3]/A[2][2];
    b=A[1][3]/A[1][1];
    a=A[0][3]/A[0][0];
    printf("y=%fx^2 + %fx + %f",a,b,c);
    
}