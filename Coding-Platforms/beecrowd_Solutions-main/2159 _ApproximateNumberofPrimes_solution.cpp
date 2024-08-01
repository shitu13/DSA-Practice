#include<stdio.h>
#include<math.h>
main()
{
    double n,y,x;
    while(scanf("%lf", &n)!=EOF){
    x= log(n);
    y= n/x;
    printf("%.1lf %.1lf\n", y,1.25506*y);
    }
    return 0;
}
