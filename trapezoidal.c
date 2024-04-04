#include<stdio.h>
#include<math.h>
float f(float x)
{
return (1-exp(-x/2.0));
}
void main()
{
float a, b, h, x, sum=0;
int n;
printf("Enter initial and final value of x:\n");
scanf("%f%f", &a, &b);
printf("Number of segments:");
scanf("%d", &n);
h=(b-a)/n;
for(x=a;x<=b;x=x+h)
{
if(x==a)
sum=sum+f(x);
else if(x==b)
sum=sum+f(x);
else
sum=sum+2*f(x);
}
sum=sum*h/2;
printf("Integral value of f(x)=%f ", sum);
printf("\n**Printed By Ujjwal Puri\n");
}