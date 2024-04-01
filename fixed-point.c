#include<stdio.h>
#include<conio.h>
#include<math.h>
float g ( float x)
{

return x*x-6*x+8;
}
int main()
{
float x0, x, error, E=0.01;
printf("Input initial estimate of a root:\n");
scanf("%f", &x0);
while(1)
{
x=g(x0);
error=(x-x0)/x;
if(fabs(error)<E)
{
printf("\nRoot=%f", x0);
break;
}
x0=x;
}
getch();
return 0;
}