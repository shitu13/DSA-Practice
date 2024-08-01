#include<stdio.h>
main()
{
    int a,hr,temp1,min,sec;
    scanf("%d", &a);
    hr= a/3600;
    temp1= a%3600;
    min= temp1/60;
    sec= a%60;
    printf("%d:%d:%d\n", hr,min,sec);

}
