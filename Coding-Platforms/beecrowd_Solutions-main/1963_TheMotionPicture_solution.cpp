#include<stdio.h>
main()
{
    double a,b,c;
    scanf("%lf %lf", &a,&b);
    c= b-a;
    printf("%.2lf%%\n", c*100/a);
    return 0;
}
