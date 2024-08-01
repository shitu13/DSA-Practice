#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cas=0,c;
    while(1){
    scanf("%d %d",&a, &b);
    cas++;
    if(a==0&&b==0) break;
    else if(a<=b) {
            c=0;
            printf("Case %d: %d\n",cas,c);
    }
    else if(a>(b*26)+b)
        printf("Case %d: impossible\n",cas);

    else{
        double x= ceil((a-b)/(b-0.0));
        printf("Case %d: %.0lf\n", cas,x);
    }
    }
    return 0;
}
