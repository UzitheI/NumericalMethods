#include<stdio.h>
#include<math.h>
#define EPSILON 0.05
float findvalueat(float x)
{
    return 2*x*x+4*x-10;
}
float findx(float x1,float x2)
{
    return (x1*findvalueat(x2)-x2*findvalueat(x1))/(findvalueat(x2)-findvalueat(x1));
}
int main()
{
    int maxiteration ,i=1;
    float x1,x2,x;
    printf("enter x1 and x2\n");
    scanf("%f%f",&x1,&x2);
    printf("enter maximum no of iterations\n");
    scanf("%d",&maxiteration);
    x=findx(x1,x2);
    do
    {
        x1=x2;
        x2=x;
        printf("iterations=%d rootd=%f\n",i,x);
        x=findx(x1,x2);
        if(fabs(x-x2)<EPSILON)
        {
            printf("final root=%f total iterations=%d",x,i+1);
            return 0;
        }
        i++;
    } while (i<=maxiteration);
    printf("final root=%f",x);
    return 0;
    


}