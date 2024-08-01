#include<stdio.h>
#include<math.h>
main()
{
    int h1,m1,h2,m2,duh,dum,ans;
    while(1){
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    if(h1==0&&m1==0&&h2==0&&m2==0) break;
    duh= h2-h1;
    if(duh<0){
        duh= 24+(h2-h1);
    }
    dum= m2-m1;
    if(dum<0){
        dum= 60+(m2-m1);
        duh--;
    }
    if(h1==h2&&m1==m2) ans= 24*60;
    else if(h1==h2&&m1>m2) ans= (23*60)+dum;
    else  ans= (duh*60)+dum;
    printf("%d\n", ans);
    }
    return 0;
}
