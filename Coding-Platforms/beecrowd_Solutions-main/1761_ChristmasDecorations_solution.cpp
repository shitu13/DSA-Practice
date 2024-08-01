#include<stdio.h>
#include<math.h>
main()
{
    double a,b,c,pi=acos(-1);
    while(scanf("%lf %lf %lf", &a,&b,&c)!=EOF){
        double d;
        d= (b*tan(pi*a/180.0))+c;
        printf("%.2lf\n", d*5.0);
    }
    return 0;
}
