#include<stdio.h>
#include<stdlib.h>
main()
{
    int n[10],i,a,x;
    scanf("%d", &a);
    x=a;
    for(i=0;i<10;i++){
        n[i]=x;
        x=x*2;
    }
    for(i=0;i<10;i++){
        printf("N[%d] = %d\n",i, n[i]);
    }

}
