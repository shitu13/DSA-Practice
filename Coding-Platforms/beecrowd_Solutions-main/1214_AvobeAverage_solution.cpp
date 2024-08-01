#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int a[1000],i,T;
    double sum,avg,n,count;
    scanf("%d", &T);
    while(T--){
    scanf("%lf",&n);
    for(i=0,sum=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
        avg=sum/n;
    }
    for(i=0,count=0;i<n;i++){
        if(a[i]>avg) count++;
    }

    printf("%.3lf%%\n", (count/n)*100);

}
}
