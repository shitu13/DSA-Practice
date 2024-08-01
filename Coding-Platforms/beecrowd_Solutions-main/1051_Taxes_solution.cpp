
#include<stdio.h>
main()
{
    double n;
    scanf("%lf", &n);
    if(n<=2000) printf("Isento\n");
    else if(n>2000&&n<=3000) printf("R$ %.2lf\n", (n-2000)*.08);
    else if(n>2000&&n<=4500) printf("R$ %.2lf\n", (n-3000)*.18+80);
    else if(n>4500) printf("R$ %.2lf\n", (n-4500)*.28+ 350);

}
