#include <stdio.h>
#define n 5  //dimension rows
#define m 4  //dimension columns
#define gx(x,y) -4
 int main()
{
int i,j,k;
float a[10][10],g[10][10],h,xl,xh,yl,x;
printf("enter xl: ");
scanf("%f",&xl);
printf("enter xh: ");
scanf("%f",&xh);
printf("enter yl: ");
scanf("%f",&yl);
h=(xh-xl)/(n-1);
for(i=1;i<=n;i++)
   {
    x=xl;
     for(j=1;j<=m;j++)
      {
      g[i][j]=gx(x,yl);
      x+=h;
      }
   yl+=h;
   }
printf("enter boundary conditions\n");
            for(i=1;i<=n;i++)
            {
               for(j=1;j<=m;j++)
               {
               if(i==1||i==n||j==1||j==m)
               {
               printf("a[%d,%d] = ",i,j);
               scanf("%f",&a[i][j]);
               }
               }
            }
            for(i=2;i<n;i++)
              for(j=2;j<m;j++)
               a[i][j]=a[n][j];   //initialization ends
  for(k=0;k<100;k++)
  {
               for(i=2;i<n;i++)
            {
               for(j=2;j<m;j++)
               {
                a[i][j]=(a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1]-(h*h*g[i][j]))/4;
               }
            }
   }                     //calculation by Gauss-Seidel Method
            for(i=1;i<=n;i++)
            {
               for(j=1;j<=m;j++)
               printf("%f\t",a[i][j]);
               printf("\n");
            }

     return 0;       
}