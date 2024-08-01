#include<stdio.h>
main()
{
    double v,d,r,h,a,pi=3.14;
    while(scanf("%lf %lf",&v,&d)!=EOF){
        r=d/2;
        h= v/(pi*r*r);
        a= pi*r*r;
        printf("ALTURA = %.2lf\nAREA = %.2lf\n", h,a);
    }
    return 0;
}
