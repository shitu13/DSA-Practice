#include<stdio.h>
main()
{
    double a,b,c,d,avg,f,g;
    scanf("%lf %lf %lf %lf", &a,&b,&c,&d);
    avg= ((a*2)+(b*3)+(c*4)+d)/10;
    printf("Media: %.1lf\n", avg);
    if(avg>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg<5)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5&&avg<7)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &f);
        printf("Nota do exame: %.1lf\n", f);

        g= (avg+f)/2;
        if(g>=5)
        {
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");

        }
        printf("Media final: %.1f\n", g);

    }

    return 0;
}