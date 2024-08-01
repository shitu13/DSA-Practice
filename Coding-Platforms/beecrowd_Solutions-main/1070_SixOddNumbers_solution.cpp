#include<stdio.h>
main()
{
    int i,n;
    scanf("%d", &n);
    if(n%2==1) n=n;
    else     n=n+1;
    printf("%d\n",n);
    for(i=1;i<=5;i++) printf("%d\n", n=n+2);
}
