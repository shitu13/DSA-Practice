
#include<stdio.h>
main()
{
    int i,a,count;
    for(i=1,count=0;i<=5;i++){
        scanf("%d", &a);
        if(a%2==0) count++;
    }
    printf("%d valores pares\n", count);
}
