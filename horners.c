#include<stdio.h>

int main()
{
    float a[100],b[100],sum=0,x;
    int n,i;
    printf("\n enter degree of polynomial X ::");
    scanf("%d",&n);
    printf(" Enter cofficeint's of the polynomial X::\n");
    for(i=n;i>=0;i--)
    {
        printf("Enter coefficient of [X^%d]::",i);
        scanf("%f",&a[i]);
    }
    printf("Enter the value of X::");
    scanf("%f",&x);
   b[n]=a[n];
   while (n>0)
   {
    b[n-1]=a[n-1]+b[n]*x;
    n--;
   }
    printf("Value of the polynomial p(%f)=%f",x,b[0]);
    return 0;
}