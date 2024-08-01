#include<stdio.h>
#include<string.h>
main()
{
    double a[12][12],sum=0.0;
    int n,i,j;
    char ch,x;
    scanf("%d%c%c", &n,&x,&ch);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &a[i][j]);
            if(j==n) sum=sum+a[i][j];
        }
    }
    if(ch=='S') printf("%.1lf\n",sum);
    else if(ch=='M') printf("%.1lf\n",sum/12.0);
    return 0;
}
