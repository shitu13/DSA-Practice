
#include<stdio.h>
#include<math.h>
main()
{
    double a,b,c,x,y,f;
    scanf("%lf%lf%lf", &a,&b,&c);
    f=sqrt(b*b-4*a*c);
    if (a>0&&f>=0){
    x=(-b+f)/(2*a);
    y=(-b-f)/(2*a);
    printf("R1 = %.5lf\nR2 = %.5lf\n",x,y);}
     else printf("Impossivel calcular\n");

 }
