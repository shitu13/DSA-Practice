#include<stdio.h>
main()
{
    int T,a,b,sum,i;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d", &a,&b);
        if(a%2==0) a++;
            sum=0;
            for(i=1;i<=b;i++,a+=2){
                sum=sum+a;
            }
            printf("%d\n", sum);
    }
    return 0;
}