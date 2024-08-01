#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int T,i,k=0;
    double a[7],d,sum;
    char ch[20];
    scanf("%d", &T);
    while(T--){
        scanf("%s %lf", &ch,&d);
        for(i=0,sum=0;i<7;i++){
            scanf("%lf", &a[i]);
            sum=sum+a[i];
            }
        double max=a[k],min=a[k];
            for(i=0;i<7;i++){
                if(a[i]> max) max=a[i];
                k=i;
            }
            for(i=0;i<7;i++){
                if(a[i]<min) min=a[i];
                k=i;
            }
            printf("%s %.2lf\n",ch,(sum-min-max)*d);
    }
}
