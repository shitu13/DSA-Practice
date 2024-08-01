#include<stdio.h>
main()
{
    double n,i=1.0,j,sum=0.0;

        for(j=1.0;j<=100.0;j++){
            n=i/j;
            sum=sum+n;
    }
    printf("%.2lf\n", sum);
    return 0;
}