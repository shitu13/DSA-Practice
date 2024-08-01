#include<stdio.h>
#include<stdlib.h>
main()
{
    int i,n;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("Ho");
        if(n!=i) printf(" ");
        if(n==i) printf("!\n");
    }
}
