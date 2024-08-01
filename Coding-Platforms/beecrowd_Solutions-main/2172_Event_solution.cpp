#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main()
{
    long long x,m;
    while(1){
        scanf("%llu %llu",&x,&m);
        if(x==0&&m==0) break;
        printf("%llu\n", x*m);
    }
    return 0;
}
