	
#include<stdio.h>
main()
{
    int a[100];
    int n,i,k=0;
    for(i=0;i<100;i++){
        scanf("%d", &a[i]);
    }
    int max=a[k];
    for(i=0;i<100;i++){
        if(a[i]>max){
            max=a[i];
            k=i;
        }
    }
    printf("%d\n%d\n",max,k+1);
}
