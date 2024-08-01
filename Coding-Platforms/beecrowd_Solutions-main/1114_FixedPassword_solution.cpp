
#include <stdio.h>
main()
{
    int number = 11;

    while(number != 2002)
    {
        scanf("%d", &number);
        if(number == 2002){
            printf("Acesso Permitido\n" );
            return 0;
        }else{
            printf("Senha Invalida\n" );
        }

    }
}
