#include<stdio.h>
main()
{
    int a,i;
    while(1){
        scanf("%d", &a);
        if(a==0) break;
        else{
            for(i=1;i<a;i++){
                printf("%d ", i);}
                printf("%d\n",a);
        }

    }
}

