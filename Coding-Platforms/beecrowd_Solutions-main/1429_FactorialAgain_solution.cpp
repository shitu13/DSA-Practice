#include<stdio.h>
main()
{
    int n,a,b,c,d,e,f,g,h,i,j;
    while(1){
    scanf("%d", &n);
    if(n==0) break;
    a=n%10;
    b=n/10;
    c=b%10;
    d=b/10;
    e=d%10;
    f=d/10;
    g=f%10;
    h=f/10;
    i=h%10;
    j=h/10;
    printf("%d\n",(a*1)+(c*2)+(e*6)+(g*24)+(i*120));
    }
    return 0;
}
