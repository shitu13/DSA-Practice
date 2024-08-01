#include<stdio.h>
main()
{
    int a[1000];
    int n,i,k=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int min=a[k];
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
            k=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,k);
}
