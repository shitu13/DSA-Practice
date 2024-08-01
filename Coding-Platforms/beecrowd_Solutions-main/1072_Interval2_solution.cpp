#include<stdio.h>
main()
{
    int N,a,c=0,d=0;
    scanf("%d", &N);
    while(N--){
        scanf("%d", &a);
        if(a>=10&&a<=20) c++;
        if(a<10||a>20) d++;
    }
    printf("%d in\n%d out\n", c,d);
}
