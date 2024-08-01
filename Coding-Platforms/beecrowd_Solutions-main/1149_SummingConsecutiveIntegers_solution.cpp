#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,n,i,sum;
    scanf("%d", &a);
    while(1){
        scanf("%d", &n);
        if(n>0) break;
    }
    for(i=a,sum=0;i<=a+n-1;i++){
        sum=sum+i;
    }
    printf("%d\n", sum);

}