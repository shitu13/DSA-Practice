#include<stdio.h>
main()
{
    int n,i;
    scanf("%d", &n);
    for(i=2;i<=n;i++){
            if(i%2==0) printf("%d^2 = %d\n",i,i*i);

    }
}
