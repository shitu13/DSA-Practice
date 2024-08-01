#include<stdio.h>
main()
{
    int n,i,count=0,d=0,e=0,f=0;
    for(i=1;i<=5;i++){
        scanf("%d", &n);
        if(n>0) count++;
        if(n<0) d++;
        if(n%2==0) e++;
        else f++;

    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",e,f,count, d);
}
