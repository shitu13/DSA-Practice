#include<stdio.h>
#include<stdlib.h>
main()
{
    double t,j;
    int N[100],i;
    scanf("%lf", &t);
    for(i=0;i<100;i++){
        j=t;
        printf("N[%d] = %.4lf\n",i,j);
        t=j/2;
    }
}
