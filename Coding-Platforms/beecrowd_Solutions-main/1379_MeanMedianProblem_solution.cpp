#include<stdio.h>
main()
{
    long long int a,b,c;
    while(1){
        scanf("%lld %lld", &a,&b);
        if(a==0&&b==0) break;
        c= a-(b-a);
        printf("%lld\n", c);
    }
    return 0;
}
