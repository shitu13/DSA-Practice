#include<stdio.h>
#include<stdlib.h>
main()
{
    double a,sum=0,i=0;
    while(scanf("%lf",&a)==1&&a>=0){
        i++;
        sum=sum+a;

    }
    printf("%.2lf\n", sum/i);

}
