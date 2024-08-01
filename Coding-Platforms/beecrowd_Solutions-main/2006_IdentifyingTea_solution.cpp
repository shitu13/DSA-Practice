#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int a,i,b,count;
    scanf("%d", &a);
    for(i=1,count=0;i<=5;i++){
        scanf("%d", &b);
        if(b==a) count++;
    }
    printf("%d\n", count);
}

