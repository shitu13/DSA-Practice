#include<stdio.h>
#include<string.h>
main()
{
    char c[20];
    double a,b;
    scanf("%s%lf%lf",&c,&a,&b);
    printf("TOTAL = R$ %.2lf\n", a+b*.15);
    return 0;
}
