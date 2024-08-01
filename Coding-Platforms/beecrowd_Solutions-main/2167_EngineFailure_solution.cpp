#include<stdio.h>
main()
{
    int  N,r,count=0,temp=0,ctdn=1,ans=0;
    scanf("%d", &N);
    while(N--){
        scanf("%d", &r);
        count++;
        if(r<temp&&ctdn==1){
            ans=count;
            ctdn=0;
        }
        temp=r;
    }
    printf("%d\n", ans);
    return 0;
}
