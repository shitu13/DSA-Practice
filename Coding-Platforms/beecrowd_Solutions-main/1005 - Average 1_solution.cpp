#include<stdio.h>
main()
{
    double a,b,c;
    scanf("%lf%lf", &a,&b);
    c=a*3.5+ b*7.5;
    printf("MEDIA = %.5lf\n", c/(3.5+7.5));
    return 0;
}
