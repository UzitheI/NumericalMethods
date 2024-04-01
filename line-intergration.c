#include<stdio.h>
double lineIntegration (double x1,double x2,double(*function)(double))
{ 
    double h=(x2-x1)/2;
    double integral=function(x1)+function(x2)*h;
    return integral;
}
double function (double x)
{
    return 2*x+1;
}
int main()
{
    double x1=0.0;
    double x2=2.0;
    double integral=lineIntegration(x1,x2,function);
    printf("line Integration:%.3f\n",integral);
    return 0;
}