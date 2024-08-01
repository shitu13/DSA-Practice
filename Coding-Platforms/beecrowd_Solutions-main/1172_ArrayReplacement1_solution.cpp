#include<stdio.h>
main()
{
    int ara[10];
    int i,x;
    for(i=0;i<=9;i++)
    {
        scanf("%d", &ara[i]);
        if(ara[i]<=0)
            ara[i]=1;
    }
    for(i=0;i<=9;i++)
    {
        printf("X[%d] = %d\n",i, ara[i]);
    }
}
