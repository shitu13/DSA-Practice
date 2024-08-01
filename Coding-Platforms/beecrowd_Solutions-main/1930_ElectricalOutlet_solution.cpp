#include<stdio.h>
main()
{
    int a,b,c,d;
    while(scanf("%d %d %d %d", &a,&b,&c,&d)!=EOF){
        printf("%d\n", a+b+c+d-3);
    }
    return 0;
}
