#include<stdio.h>
main()
{
    int p1,j1,j2,r,a,sum=0,win;
    scanf("%d %d %d %d %d", &p1,&j1,&j2,&r,&a);
    sum= j1+j2;
    if((sum%2==0&&p1==1)||(sum%2==1&&p1==0)) win=1;
    else win=2;
    if((r==0&&a==1)||(r==1&&a==0)) win=1;
    else if(r==1&&a==1) win=2;
    printf("Jogador %d ganha!\n",win);
    return 0;
}
