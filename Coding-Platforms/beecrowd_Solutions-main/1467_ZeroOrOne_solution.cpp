#include<stdio.h>
#include<string.h>
main()
{
    int a,b,c;
    while(scanf("%d %d %d", &a,&b,&c)!=EOF){
        if(a==b&&b==c&&c==a) printf("*\n");
        else if(a==b) printf("C\n");
        else if(b==c) printf("A\n");
        else if(c==a) printf("B\n");
    }
    return 0;
}
