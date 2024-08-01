#include<stdio.h>
#include<math.h>
main()
{
    int T;
    scanf("%d", &T);
    while(T--){
        int i;
        long long int sum,n;
        scanf("%lld", &n);
        sum= pow(2,n)/12000;
        printf("%lld kg\n", sum);
    }
    return 0;
}
