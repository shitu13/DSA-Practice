

#include<stdio.h>
main()
{
    double a;
    scanf("%lf", &a);
    if(a>0&&a<=400) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n", (a*.15)+a,a*.15);
    if(a>400&&a<=800) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", (a*.12)+a,a*.12);
    if(a>800&&a<=1200) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", (a*.10)+a,a*.10);
    if(a>1200&&a<=2000) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", (a*.07)+a,a*.07);
    if(a>2000) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", (a*.04)+a,a*.04);

}