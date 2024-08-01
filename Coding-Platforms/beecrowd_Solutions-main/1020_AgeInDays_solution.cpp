#include<stdio.h>
main()
{
    int a,b,c;
    scanf("%d", &a);
    printf("%d ano(s)\n", a/365);
    b=a%365;
    printf("%d mes(es)\n", b/30);
    c=b%30;
    printf("%d dia(s)\n",c);
}
