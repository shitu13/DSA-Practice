
#include<stdio.h>
main()
{
    double a,b;
    scanf("%lf", &a);
    while(a>10||a<0){
        printf("nota invalida\n");
        scanf("%lf", &a);
    }
    if(a>=0&&a<=10){
            scanf("%lf", &b);
    while(b>10||b<0){
        printf("nota invalida\n");
        scanf("%lf", &b);
    }}
    if(b>=0&&b<=10){
        printf("media = %.2lf\n",(a+b)/2);
    }

}
