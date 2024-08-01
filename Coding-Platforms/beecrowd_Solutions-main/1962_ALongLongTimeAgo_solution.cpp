#include<stdio.h>
main()
{
    int T;
    scanf("%d", &T);
    while(T--){
        long long n;
        scanf("%llu", &n);
        if(n==2015) printf("1 A.C.\n");
        else if(n>2015) printf("%llu A.C.\n", n-2014);
        else if(n<2015) printf("%llu D.C.\n", 2015-n);
    }
    return 0;
}
