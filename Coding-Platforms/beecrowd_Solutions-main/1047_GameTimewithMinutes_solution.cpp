
#include<stdio.h>
#include<math.h>
main()
{
    int h1,m1,h2,m2,duh,dum;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    duh= h2-h1;
    if(duh<0){
        duh= 24+(h2-h1);
    }
    dum= m2-m1;
    if(dum<0){
        dum= 60+(m2-m1);
        duh--;
    }
    if(h1==h2&&m1==m2) printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if(h1==h2&&m1>m2) printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",23, dum);
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duh,dum);
    return 0;


}