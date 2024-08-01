#include<stdio.h>
main()
{
    int a,al=0,g=0,d=0;
    while(1)
    {
        scanf("%d", &a);
        if(a==1) al++;
        else if(a==2) g++;
        else if(a==3) d++;
        else if(a==4){
            printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", al,g,d);
            break;
        }
    }
}
