#include<stdio.h>
#include<string.h>
main()
{
    int T;
    int  a,b,h,w,temp;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d", &b,&a);

        printf("%d cm2\n",(a*b)/2);
    }
    return 0;
}
