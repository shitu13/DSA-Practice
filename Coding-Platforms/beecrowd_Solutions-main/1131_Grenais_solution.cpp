#include<stdio.h>
main()
{
    int inter=0,gremio=0,i=1,d=0,count=0,a,b;
    while(i!=2)
    {
        scanf("%d %d", &a,&b);
        if(a>b) inter++;
        if(b>a) gremio++;
        if(a==b) d++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &i);
        count++;

    }
        printf("%d grenais\n", count);
        printf("Inter:%d\n", inter);
        printf("Gremio:%d\n", gremio);
        printf("Empates:%d\n", d);
         if(a<b){
            printf("Gremio venceu mais\n");
        }

        if(a>b){
            printf("Inter venceu mais\n");
        }
         if(a==b){
            printf("Nao houve vencedor\n");
        }

}
