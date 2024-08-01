#include<stdio.h>
main()
{
    int N;
    long long n,i,d,count;
    scanf("%d", &N);
    while(N--){
        scanf("%llu", &n);
        if(n==0||n==1) 
            printf("Not Prime\n");
        else{
            count=1;
        d= sqrt(n);
        for(i=2;i<=d;i++){
            if(n%i==0){
            count=0;
            break;
            }
        }
        if(count)
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }
    }
    return 0;
}
