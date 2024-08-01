#include<stdio.h>
#include<stdlib.h>
main()
{
    int i,n,m,count=0;
    scanf("%d%d", &n,&m);
    if(n<m){
    for(i=n,count=0;i<=m;i++){
        if(i%13!=0) count=count+i;}}
    if(m<n){
        for(i=m,count=0;i<=n;i++)
            if(i%13!=0) count=count+i;
    }
    printf("%d\n",count);
}
