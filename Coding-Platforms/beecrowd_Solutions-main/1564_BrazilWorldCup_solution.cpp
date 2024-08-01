#include<stdio.h>
#include<stdlib.h>
main()
{
    int a;
    while(scanf("%d", &a)!=EOF){
        if(a==0) printf("vai ter copa!\n");
        if(a!=0) printf("vai ter duas!\n");
    }

}
