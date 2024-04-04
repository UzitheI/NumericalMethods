#include<stdio.h>
int main()
{
float x[10], f[10], y, sum=0.0, l;
int n, i, j;
printf("\nInput number of data:");
scanf("%d", &n);
printf("Input data points x(i) & f(i):\n");
for(i=0;i<n;i++)
{
printf("enter the value of x[%d]and f[%d]:",i,i);
scanf("%f %f",&x[i],&f[i]);
}
printf("Functional value:");
scanf("%f", &y);
for(i=0;i<n;i++)
{
l=1;
for(j=0;j<n;j++)
{
if(j!=i)
{
l=l*(y-x[j])/(x[i]-x[j]);
}
}
sum=sum+l*f[i];
}
printf("\nInterpolation value at %f=%f", y, sum);
printf("\n**Program printed By Ujjwal Puri\n");
return 0;
}