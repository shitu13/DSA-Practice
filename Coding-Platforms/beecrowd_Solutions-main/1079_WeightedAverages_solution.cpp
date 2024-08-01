
#include<stdio.h>
main()
{
    int T;
    double a,b,c;
    scanf("%d", &T);
    while(T--){
        scanf("%lf%lf%lf",&a,&b,&c);
        printf("%.1lf\n", ((a*2)+(b*3)+(c*5))/10 );
    }

}
