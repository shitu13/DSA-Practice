#include <stdio.h>
#include <math.h>
main()
{
    int T;
    scanf("%d", &T);
    while(T--){
    int a,b,t;
    scanf("%d %d", &a,&b);
    while(b!=0){
        t=b;
        b= a%b;
        a=t;
    }
    printf("%d\n", a);
    }
    return 0;
}
