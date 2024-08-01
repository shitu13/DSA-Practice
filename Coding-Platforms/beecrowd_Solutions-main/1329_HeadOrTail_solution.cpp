#include<stdio.h>
main()
{
    int T,n,mar,john;
    while(1){
    scanf("%d", &T);
    if(T==0) break;
    mar=0,john=0;
    while(T--){
        scanf("%d", &n);
        if(n==0) mar++;
        if(n==1) john++;
    }
        printf("Mary won %d times and John won %d times\n", mar,john);

    }
    return 0;

}
