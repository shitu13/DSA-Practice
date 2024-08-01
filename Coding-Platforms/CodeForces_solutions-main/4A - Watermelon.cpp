#include<stdio.h>
main()
{
    int a,sum,i;
    while(scanf("%d", &a)!=EOF){
            if(a==2) printf("NO\n");
            else if(a%2==0){
                    printf("YES\n");
             }
            else printf("NO\n");
    }
    return 0;
}