#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int T,n;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        if(n%2==0) printf("0\n");
        else printf("1\n");
    }
}
