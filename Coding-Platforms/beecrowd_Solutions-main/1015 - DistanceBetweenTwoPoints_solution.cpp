#include<stdio.h>
main()
{
    double x1,x2,y1,y2,c;
    scanf("%lf%lf%lf%lf", &x1,&y1,&x2,&y2);
    c= (x1-x2)*(x1-x2)+ (y1-y2)*(y1-y2);
    printf("%.4lf\n", sqrt(c));
    return 0;
}
