#include<stdio.h>
#include<string.h>
main()
{
    int i,j,n;
    double sum=0.0,a[12][12];
    char ch,x;
    scanf("%d%c%c", &n,&x,&ch);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &a[i][j]);
        if(i==n) sum=sum+a[i][j];
    }
    }

    if(ch=='S') printf("%.1lf\n",sum);
    else if(ch=='M') printf("%.1lf\n",sum/12.0);
    return 0;
}
