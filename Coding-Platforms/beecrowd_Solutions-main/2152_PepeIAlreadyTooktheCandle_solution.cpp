#include<stdio.h>
main()
{
    int a,b,c,T;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d %d", &a,&b,&c);
        if(c==0) printf("%02d:%02d - A porta fechou!\n",a,b);
        if(c==1) printf("%02d:%02d - A porta abriu!\n",a,b);
    }
    return 0;
}
