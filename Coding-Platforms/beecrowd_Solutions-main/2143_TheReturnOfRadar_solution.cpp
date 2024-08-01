#include<stdio.h>
#include<stdlib.h>
main()
{
    int t,n;
    while(1){
        scanf("%d", &t);
        if(t==0) break;
        else if(t>=1&&t<=100){
            while(t--){
                scanf("%d", &n);
                if(n>=3&&n<=10000){
                    if(n%2) printf("%d\n", (n*2)-1);
                    else printf("%d\n", (n*2)-2);
                }
            }
        }
    }
}
