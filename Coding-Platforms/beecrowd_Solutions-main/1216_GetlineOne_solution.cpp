#include<stdio.h>
main()
{
    char s[100];
    double d,t=0.0,count=0.0;
    while(gets(s))
    {
        scanf("%lf%*c",&d);
        t=t+d;
        count++;
    }
    printf("%.1lf\n", t/count);
    return 0;
}
