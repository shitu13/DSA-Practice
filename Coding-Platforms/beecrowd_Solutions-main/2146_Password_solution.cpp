#include<stdio.h>
#include<stdlib.h>
main()
{
    int a;
    while(scanf("%d", &a)!=EOF){
        if(a>1000&&a<10000)
        printf("%d\n", a-1);
    }
}
