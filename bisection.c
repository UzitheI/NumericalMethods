#include<stdio.h>
#include<math.h>
float findvalueAt(float x)
{
    return (3*x*x-6*x+2);
}
float bisection(float x1,float x2)
{
    return (x1+x2)/2;
}
int main()
{
    int maxIteration,i=1;
    float x1,x2,x;
    printf("enter maximum no of iteration \n");
    scanf("%d",&maxIteration);

    do{
        printf("enter the value of x1 and x2(starting bounary)");
        scanf("%f %f",&x1,&x2);
        if(findvalueAt(x1)*findvalueAt(x2)>0)
        {
            printf("roots inavlid\n");
            continue;
        }
        else {
            printf("roots lie between %f and %f\n",x1,x2);
            break;
        }
    }
    while(1);
    while(i<=maxIteration)
    {
        x=bisection(x1,x2);
        if(findvalueAt(x)*findvalueAt(x1<0))
        x2=x;
        else if (findvalueAt(x)*findvalueAt(x2)<0)
        x1=x;
        printf("iteration =%d roots=%f\n",i,x);
        i++;
    }
    printf("root=%f total iterations=%d",x,--i);
    return 0;
}