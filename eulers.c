#include<stdio.h>
#include<conio.h>
#include<math.h>
float fun( float x, float y)
{
float f;
f = x*x+y*y;
return f;
}
int main()
{
int i, n;
float x0, y0, xp, h, y;
printf("Enter initial value of x and y:\n");
scanf("%f%f",&x0,&y0);
printf("Enter x at which y is required:");
scanf("%f",&xp);
printf("Enter step-size (h):");
scanf("%f",&h);
n=(xp - x0)/h;
for(i=0; i < n; i++)
{
y=y0+h*fun(x0,y0);
x0=x0+h;
y0=y;
}
printf("\nValue of y at x=%f is %f",x0,y0);
getch();
}