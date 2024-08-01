#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,a[20];
    for(i=0;i<20;i++){
        scanf("%d", &a[i]);
    }
    for(i=19,j=0;i>=0,j<20;i--,j++){
        printf("N[%d] = %d\n",j, a[i]);
    }
}
