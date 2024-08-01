#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int T;
    double a,b,c,d,e,f,sa=0,bl=0,at=0,p=0,q=0,r=0;
    char ch[30];
    scanf("%d", &T);
    while(T--)
    {
        scanf("%s", &c);
        scanf("%lf %lf %lf", &a,&b,&c);
        scanf("%lf %lf %lf", &d,&e,&f);
        sa= sa+a; p=p+d; q=q+e;r=r+f;
        bl= bl+b;
        at= at+c;
    }
    printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n", (p/sa)*100,(q/bl)*100,(r/at)*100);
}
