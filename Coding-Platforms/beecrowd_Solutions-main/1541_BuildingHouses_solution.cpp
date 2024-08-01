#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int a,b,c,d,e;
    while(1){
        scanf("%d", &a);
        if(a==0) break;
        else{
            scanf("%d %d", &b,&c);
            d=(a*b*100)/c;
            e=pow(d,.5);
             printf("%d\n", e);
        }
    }
}
