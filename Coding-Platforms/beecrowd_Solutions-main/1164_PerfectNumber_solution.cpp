#include<stdio.h>
main()
{
    int a,i,sum,T;
    scanf("%d", &T);
    while(T--){
    scanf("%d", &a);
    for(i=1,sum=0;i<=a/2;i++){
        if(a%i==0) sum=sum+i;
    }
    if(sum==a) printf("%d eh perfeito\n",a);
    else if(sum!=a) printf("%d nao eh perfeito\n", a);
    }
    return 0;
}
