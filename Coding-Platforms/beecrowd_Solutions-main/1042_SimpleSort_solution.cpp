
#include<stdio.h>
#include <stdlib.h>
main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(a>b&&a>c){
        if(b>c) printf("%d\n%d\n%d\n",c,b,a);
            else printf("%d\n%d\n%d\n",b,c,a);
    }
    else if(b>a&&b>c){
        if(a>c) printf("%d\n%d\n%d\n", c,a,b);
        else printf("%d\n%d\n%d\n", a,c,b);
    }
    else if(c>a&&c>b){
        if(b>a) printf("%d\n%d\n%d\n", a,b,c);
        else printf("%d\n%d\n%d\n", b,a,c);
    }
    printf("\n%d\n%d\n%d\n",a,b,c);
    return 0;
}