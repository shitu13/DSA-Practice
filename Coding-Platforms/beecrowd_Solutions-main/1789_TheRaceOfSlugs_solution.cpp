#include<stdio.h>
#include<stdlib.h>
main()
{
    int T,L[500],i,k=0;
    while(scanf("%d", &T)!=EOF){
            for(i=0;i<T;i++){
                scanf("%d", &L[i]);
            }
            int max= L[k];
        for(i=0;i<T;i++){
           if(L[i]>max)
            max=L[i];
           k=i;
        }
        if(max<10) printf("1\n");
        else if(max>=10&&max<20) printf("2\n");
        else if(max>=20) printf("3\n");

    }
}
