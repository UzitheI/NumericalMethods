#include<stdio.h>
double doubleintegration(double x1,double x2,double y1,double y2,double(*function)(double,double))
{
    double h1=(x2-x1)/2;
    double h2=(y2-y1)/2;
    double integral =function(x1,y1)+function(x1,y2)+function(x2,y1)+function(x2,y2)*h1*h2;
    return integral;
}
double function (double x,double y)
{
    return 2*x+y;
}
int main()
{
     double x1,y1,x2,y2;
    printf("enter value of x1,x2:");
    scanf("%lf %lf",&x1,&x2);
    printf("enter value of y1,y2:");
    scanf("%lf %lf",&y1,&y2);
    double integral=doubleintegration(x1,x2,y1,y2,function);
    printf("Double Integration %.4lf\n",integral);
    return 0;
}