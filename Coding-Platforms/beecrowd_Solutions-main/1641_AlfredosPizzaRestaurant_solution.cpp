#include<stdio.h>
int main()
{
    int cas=0;
    while(1){
    long long int area,area2,r,l,w;
    scanf("%lld",&r);
    if(r==0) break;
    scanf("%lld %lld", &l, &w);
    cas++;
    area2= l*l+w*w;
    area= 4*r*r;
    if(area>=area2) printf("Pizza %d fits on the table.\n",cas);
    else printf("Pizza %d does not fit on the table.\n",cas);
    }
    return 0;
}
