#include<stdio.h>
#include<stdlib.h>
main()
{
    long long a,b;
    while(scanf("%llu %llu",&a,&b)!=EOF){
        if(a>=b) printf("%llu\n", a-b);
        else printf("%llu\n", b-a);
    }
    return 0;
}
