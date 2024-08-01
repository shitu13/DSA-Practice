
#include<stdio.h>
main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)==2){
        if (x==0||y==0) break;
        else{
            if(x>0&&y>0) printf("primeiro\n");
                if(x>0&&y<0) printf("quarto\n");
                if(x<0&&y>0) printf("segundo\n");
                if(x<0&&y<0) printf("terceiro\n");
        }

    }
}
