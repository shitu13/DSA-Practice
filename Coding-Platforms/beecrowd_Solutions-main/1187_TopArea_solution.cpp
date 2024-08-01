#include<stdio.h>
main()
{
    double a[12][12],sum=0.0,count=0.0;
    char ch;
    int i,j;
    scanf("%c", &ch);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &a[i][j]);
        }
    }
    for(i=0;i<=4;i++){
        for(j=i+1;j<=11-i-1;j++){
        sum=sum+a[i][j];
        count++;
    }
    }
    if(ch=='S') printf("%.1lf\n",sum);
    else if(ch=='M') printf("%.1lf\n",sum/count);
    return 0;
}

