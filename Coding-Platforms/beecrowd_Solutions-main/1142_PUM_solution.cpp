#include<stdio.h>
#include<stdlib.h>
main()
{
    int i,j,k,l;
    scanf("%d", &l);
    for(i=1,j=2,k=3;i<=l*4,j<=l*4,k<=l*4;i=i+4,j=j+4,k=k+4){
        printf("%d %d %d PUM\n", i,j,k);
    }

}
