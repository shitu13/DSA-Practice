
#include<stdio.h>
main()
{
    int i,j,k=7;
    for(i=1;i<=9;i+=2){
        for(j=k;j>=k-2;j--){
            printf("I=%d J=%d\n", i,j);
    }
        k=j+5;
    }
    return 0;
}
