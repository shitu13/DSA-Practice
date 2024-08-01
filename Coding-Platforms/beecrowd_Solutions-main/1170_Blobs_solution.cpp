#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int T,i;
    double a,b;
    scanf("%d", &T);
    while(T--){
        scanf("%lf",&a);
        i=0;
        while(a>1){
            b=a/2;
            a=b;
            i++;
        }
        printf("%d dias\n",i);
    }
}
