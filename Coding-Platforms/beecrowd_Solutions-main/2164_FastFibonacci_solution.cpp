#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int n;
    double x,y,a,b,val;
    scanf("%d", &n);
    if(n>0&&n<=50){
    x=(1+sqrt(5))/2;
    y=(1-sqrt(5))/2;
    a=pow(x,n);
    b=pow(y,n);
    val= (a-b)/sqrt(5);
    printf("%.1lf\n",val);
}
}
