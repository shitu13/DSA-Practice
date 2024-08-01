#include<stdio.h>
main()
{
    long long a,b,x,y,n;
    while(scanf("%llu %llu", &a,&b)!=EOF){
    x= (a*(a+1))/2;
    y= (b*(b+1)/2);
    n= y-x;
    printf("%llu\n",n+a);
    }
    return 0;
}
