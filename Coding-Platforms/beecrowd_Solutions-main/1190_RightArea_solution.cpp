#include<stdio.h>
main()
{
    double a[12][12],sum=0.0,count=0.0,c=0.0,s=0.0,fsum;
    char ch;
    int i,j;
    scanf("%c", &ch);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &a[i][j]);
        }
    }
    for(i=1;i<=5;i++){
        for(j=11;j>=11-i+1;j--){
        sum=sum+a[i][j];
        count++;
    }}
    for(i=6;i<=10;i++){
        for(j=i+1;j<=11;j++){
            s=s+a[i][j];
        c++;
    }
    }
    fsum=sum+s;
    if(ch=='S') printf("%.1lf\n",fsum);
    else if(ch=='M') printf("%.1lf\n",fsum/(count+c));
    return 0;
}

