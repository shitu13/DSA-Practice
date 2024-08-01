#include<stdio.h>
#include<stdlib.h>
main()
{
    int N[1000],i,j=0,t;
    scanf("%d", &t);
    if(t>=2&&t<=50){
    for(i=0;i<1000;i++){
        printf("N[%d] = %d\n", i,j);
        j++;
        if(j==t) j=0;
    }
}
}
