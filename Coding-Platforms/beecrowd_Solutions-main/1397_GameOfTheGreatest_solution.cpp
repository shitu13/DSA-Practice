#include<stdio.h>
main()
{
    int T,a,b,c,d;
    while(1){
    scanf("%d", &T);
    if(T==0) break;
    c=0,d=0;
    while(T--){
        scanf("%d %d", &a,&b);
        if(a>b) c++;
        if(b>a) d++;
    }
    printf("%d %d\n", c,d);
    }
    return 0;
}
