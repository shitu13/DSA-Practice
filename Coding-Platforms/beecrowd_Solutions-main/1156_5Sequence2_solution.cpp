#include<stdio.h>
main()
{
    double i,j,sum=0.0;
    for(i=1,j=1;i<=39;i=i+2,j=j*2){
        sum= sum+i/j;
    }
    printf("%.2lf\n",sum);
    return 0;
}
