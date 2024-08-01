#include<stdio.h>
main()
{
    int n,i,T;
    scanf("%d", &T);
    while(T--){
    scanf("%d", &n);
    for(i=2;i<=n/2;i++){
        if(n%i==0)
            break;
    }
    if(i==(n/2)+1) printf("%d eh primo\n",n);
    else printf("%d nao eh primo\n",n);
    }
    return 0;
}
