#include<stdio.h>
#include<conio.h>
#include<math.h>
float f( float x)
{
float y;
y= x*x+4*x-9;
return y;
}
float fd( float x)
{
float y;
y= 2*x+1;
return y;
}
void main()
{
float x0,x1,error=0.01;
int i=0;
printf("\nGuess initial root:");
scanf("%f", &x1);
do
{
x0=x1-(f(x1)/fd(x1));
x1=x0;
i++;
}while(fabs (f(x0))>error);
printf("Root=%f", x0);
printf("\nNumber of iteration=%d",i);
getch();
}