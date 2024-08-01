#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int i,a,b;
    long long fac,fact;
    while(scanf("%d %d", &a,&b)!=EOF){
        for(i=1,fac=1;i<=a;i++){
            fac= fac*i;
        }
        for(i=1,fact=1;i<=b;i++){
            fact=fact*i;
        }
        printf("%llu\n", fact+fac);
    }
}
