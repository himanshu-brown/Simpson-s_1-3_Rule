#include<stdio.h>
#include<conio.h>
#include<math.h>
//f(x)=1/sqrt(1+x*x)
double fun(double x)
{
 return(1/(sqrt(1+x*x)));
}
int main()
{
 float x[6],y[6];
 int i,l1,l2,n=5;
 double h,sum=0,p;
 clrscr();
 printf("--------------------------SIMPSON'S 1/3 RULE--------------------------------\n\n");
 printf("1/(sqrt(1+x*x))\n");
 printf("Enter the lower limit : ");
 scanf("%d",&l1);
 printf("Enter the upper limit : ");
 scanf("%d",&l2);
 h=(l2-l1)/(float)n;
 printf("h : %.3f\n",h);
 p=l1;
 for(i=0;i<=n;i++)
 {
  x[i]=p;
  y[i]=fun(p);
  p=p+h;
 }
 sum=y[0]+y[5];
 for(i=1;i<n;i++)
 {
 if(i%2==0)
 sum=sum+2*y[i];
 else
 sum=sum+4*y[i];
 }
 sum=sum*h/3;
 printf("Result = %f",sum);

 getch();
}