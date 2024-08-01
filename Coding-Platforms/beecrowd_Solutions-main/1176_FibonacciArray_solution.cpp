#include<stdio.h>
#include<stdlib.h>
main()
{
    long long a,b,c,i,n;
    int T;
    scanf("%d", &T);
    while(T--){
    scanf("%llu", &n);
    for(i=0,a=-1,b=1;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("Fib(%llu) = %llu\n",n,c);
}
}
