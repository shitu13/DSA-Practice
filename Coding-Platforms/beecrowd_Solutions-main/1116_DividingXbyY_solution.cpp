
#include<stdio.h>
main()
{
    int T;
    double a,b;
    scanf("%d", &T);
    while(T--){
        scanf("%lf%lf", &a,&b);
        if(b==0) printf("divisao impossivel\n");
        else printf("%.1lf\n", a/b);

    }
}
