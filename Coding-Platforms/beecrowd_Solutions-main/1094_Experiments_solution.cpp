
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int T,a,sum=0;
    int c=0,r=0,s=0;
    float x,y,z;
    char ch;
    scanf("%d", &T);
    while(T--){
        scanf("%d %c", &a,&ch);
        if(ch=='C') c=c+a;
        else if(ch=='R') r+=a;
        else if(ch=='S') s=s+a;
        sum=sum+a;
    }

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", sum,c,r,s);
    x= (float)c/(float)sum*100;
    y= (float)r/(float)sum*100;
    z= (float)s/(float)sum*100;
    printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",x,y,z);
}
