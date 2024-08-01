#include<stdio.h>
main()
{
    int n,m,l,a,b,c,d;
    scanf("%d", &n);
    if(n>0&&n<1000000) {
            printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", n/100);
    m= n%100;   printf("%d nota(s) de R$ 50,00\n", (m/50));
    l= m%50;   printf("%d nota(s) de R$ 20,00\n", l/20);
    a=l%20;    printf("%d nota(s) de R$ 10,00\n", a/10);
    b=a%10;     printf("%d nota(s) de R$ 5,00\n", b/5);
    c=b%5;  printf("%d nota(s) de R$ 2,00\n", c/2);
    d=c%2; printf("%d nota(s) de R$ 1,00\n", d/1);
}
}
