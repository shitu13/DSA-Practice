#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    while(1){
    scanf("%lld %lld", &n,&m);
    if(n==0&&m==0)
        break;
    long long int x,r,p,c=0,carry=0;
    while(n!=0||m!=0){
       r= n%10;
       n= n/10;
       p= m%10;
       m= m/10;
       x= r+p+carry;
       carry= x/10;
       if(carry>=1)
       c++;
    }
    if(c==0) printf("No carry operation.\n");
    else if(c==1) printf("%d carry operation.\n",c);
    else printf("%d carry operations.\n", c);
    }
    return 0;

}

