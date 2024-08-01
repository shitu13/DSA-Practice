#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,sum,i;
    while(1){
    scanf("%d", &a);
    if(a==0) break;
    else if(a%2!=0){
        a=a+1;
        for(i=a,sum=0;i<=a+8;i=i+2){
            sum=sum+i;
        }
        printf("%d\n", sum);
    }
    else{
        for(i=a,sum=0;i<=a+8;i+=2){
            sum+=i;
        }
        printf("%d\n", sum);
    }
}
}
